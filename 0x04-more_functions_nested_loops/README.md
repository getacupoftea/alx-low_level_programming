This marks the fourth project of the C programming language. I have been far behind in my projects, so I am trying so hard to cover up my backlogs and meet theproject deadlines.
As stated in the requirements, we are only allowed to use _putchar not printf or puts.
Next is to initially create the "main.h" file, which is the header file that should contain all function prototypes of all the tasks, and that of _putchar.
Then, to create the _putchar.c and the "main.c" files as required in each of the tasks.

After creating these files, you are good to go.
For task 0, I vi into the file "0-isupper.c", the included my header file but this time: #include "main.h" instead of "#include <stdio.h>, cause I had defined my function prototypes in the "main.h" file.
Next, I included my comments explaining what the code should do, and what it should return,of course to also conform to the betty documentation style.
Then, to include the function prototype: int _isupper(int c);

@c: Indicates that the parameter c is the character to be checked.
Return: 1 for upper letter or 0 for any else: Describes the return value of the function, indicating that the function returns 1 if the character is an uppercase letter and 0 otherwise.
The function takes an integer parameter c, which is assumed to represent the ASCII code of a character.
The if statement checks if the value of c corresponds to an uppercase letter. In ASCII, uppercase letters have values between 65 ('A') and 90 ('Z').
If c is within the specified range, the function returns 1, indicating that the character is an uppercase letter.
If c is not within the specified range, the function returns 0, indicating that the character is not an uppercase letter.
In summary, the _isupper function determines whether a given character, represented by its ASCII code (c), is an uppercase letter. The function returns 1 if the condition is true and 0 otherwise.

For task 1, The function takes an integer parameter c, which represents the ASCII code of a character.

The if statement checks if the ASCII code corresponds to a digit. In ASCII, the digits '0' to '9' have codes from 48 to 57.

If the condition is true, the function returns 1, indicating that the character is a digit.

If the condition is false, the else block is executed, and the function returns 0, indicating that the character is not a digit.

In summary, the _isdigit function checks if a given character (represented by its ASCII code) is a digit between '0' and '9'. It returns 1 if the condition is true and 0 otherwise. This function can be used to determine whether a character is a numeric digit in C programming.
