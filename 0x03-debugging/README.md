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


TASK 3: 

NB: include all function prototypes in your "main.h' file
