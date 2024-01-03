This marks the third project of my learning C programming - 0x03-debugging

Overview: Debugging refers to the process of identifying and fixing bugs, errors or any unexpected behavior that prevents a software/ program from running correctly, or as it should. 

C debugging refers to carefully checking for errors in a C program and fixing them. It is a must have skill for every developer.

Using the gcc compiler is a great way for checking errors in codes. It will highlight the numbers in the codes that were affected or need fixing, this makes debugging quite easier.

TASK 0: Multiple mains
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
You are not allowed to add or remove lines of code, you may change only one line in this task.
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x03-debugging
File: 0-main.c, main.h

TASK 0: 

For task 0, I created three different files, namely: "main.h", "0-main.c" and the "positive_or_negative.c", but ignore the "positive_or_negative.c" file, I shouldn't have created it according to the question, but was confused at some point. However, it doesn't matter.

So, the task then say only one line of code is to be changed, which is in the "0-main.c" file, the test file will give a different output, but it is required that I use a case of 0; so, I changed line only 12, just as required.



TASK 1: Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.
carrie@ubuntu:/debugging$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
carrie@ubuntu:/debugging$

The provided C program is intentionally causing an infinite loop, and the task says to identify and comment out the part of the code responsible for the infinite loop without adding or removing any lines of code. The line causing this infinite loop is the while loop; then the solution is to comment out the while loop. Yes, C comments, but it must conform to betty style, that should be "/* */"

Task 2: This program prints the largest of three integers.

carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
? That’s definitely not right.

Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

Line count will not be checked for this task.
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x03-debugging
File: 2-largest_number.c, main.h

This program is expected to print the largest number, which is 972,but with this present code, it prints 0 as the largest number, which is very wrong and needs to be corrected. So, the errors in the code should be fixed for it to print 972 as the largest number. It is just a small bug in the "if & if else" statements. The solution is to modify the conditions to use >= instead of just > to cover cases where two or more numbers are equal and the largest can be any of them. 


TASK 3:  Leap year
mandatory
Score: 0.0% (Checks completed: 0.0%)
This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

carrie@ubuntu:/debugging$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

carrie@ubuntu:/debugging$ 
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$
Output looks good for 04/01/1997! Let’s make a new main file 3-main_b.c to try a case that is a leap year: 02/29/2000.

carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
carrie@ubuntu:/debugging$ ./3-main_b
Date: 02/29/2000
Invalid date: 02/29/2000
carrie@ubuntu:/debugging$
? That doesn’t seem right.

Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

Line count will not be checked for this task.
You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).


The task involves fixing the “print_remaining_days” function to ensure it works correctly for all dates and leap years. However, for this code, this will not work correctly, so we have to modify the code.

First: We create all of the necessary files and with the necessary codes; the “3-convert_day.c” “3-main_a.c” and the “main.h” file to include the function prototypes: int convert_day(int month, int day) with a semicolon(;)
and; void print_remaining_days(int month, int day, int year);

Secondly: to create and modify, to create the “3-print_remaining_days.c” and “3-main_b.c” file which is the ones will be working on exactly for the task. 

I copied the codes from the 3-main_a.c file to 3-main_b.c file, but modified the month, day and year as 02, 29, 2000 respectively, just as required. 

Next is to check for the “3-print_remaining_days.c” file and modify it too to allow it print the correct output. For my code, I slightly changed the if statements from 15-17.

Takeaways: To go to a particular number in vi directly, just click on the “ESC” key on your keyboard, and press the “number” you wish to go to and “gg”. You might not see it, but don’t worry, it works. Like this “ESC+15+gg”; it automatically takes you to that line.

To clear betty trailing whitespaces: use the command; %s/\s\+$//g, but in command mode, like this; ESC + shift key semicolon + %s/\s\+$//g + enter.

Thanks to my wonderful peers for helping me out with this project. xoxo

NB: include all function prototypes in your "main.h' file

ps: make sure to always check your codes with betty and the gcc compiler to see if your outputs are just as accurate.
Then, remember to git push your files
