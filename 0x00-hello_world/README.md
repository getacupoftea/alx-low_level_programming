OVERVIEW: Hi guysssss , welcome to the beginning of my learning C programming 

I learnt the concepts of compiling and the processes.
It is four stages; and they’re: Preprocessing, Compilation, Assembly and Linking.  Using “gcc” is one of the common and popular method of compiling C programs, the output of compiling a c program is an “executable file”, while the yet to be compiled program is referred to as the “source code”

To compile using gcc, the syntax is: gcc  your_source_code.c -o desired_output

However, if you do not identify an output name for your executable, it automatically generated a file called “a.out”  You can use “man gcc” to check other options.

TASK 0:  Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

Explanation: This task requires to write a script, first of all, remember, every script must include “#!/bin/bash” on the first line.

remember, “man gcc” will help you check for the right options to use for this task.  However, the question says to stop after the preprocessing stage and not compile fully, and the option to do this is “gcc -E” and the variable name of the C file is $CFILE and the output should be saved in the file named “c”, hence the code below:

gcc -E $CFILE -o c: this will stop the code from running fully,  and just stop at the preprocessing stage 

TASK 1: Write a script that compiles a C file but does not link.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
    * Example: if the C file is main.c, the output file should be main.o

Explanation: the task is asking to write a script  and to compile the C file, but must not link. This means that it should stop at compilation stage, no output name is given this time, it is to be the same name as the $CFILE , but with the extension  .o

After compiling, the source file will generate an object file, hence the extension .o. Basically, the output after compiling a C program is the “filename.o”

To do this task, we use the gcc, but with what option? that’s for you to check the man page, however, the option is gcc -c, and the filename $CFILE.

hence the code; gcc -c $CFILE

TASK 2: This task says to write a script that generates the assembly code (.s file) from a C code file and saves it in an output file. There is no specific name for the output file in this task as well, this script will use gcc -S to generate the assembly code and then saves it to  a file with the same name as the input C file but with a .s extension.

Hence, the code: gcc -S $CFILE. Although, in this context, both gcc $CFILE -S and gcc -S $CFILE are valid, and they produce the same result.  It's just a matter of convention and personal preference.

TASK 3: Write a script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE
Explanation: This task requires to create an executable file and to generate the output name "cisfun". I was a bit confused with this task, cause I thought I could directly do gcc -c $CFILE -o cisfun, but if you did this just like me, do not fret, it is normal to be confused lol.

This option will create an object file rather than an executable file, so instead of that; it should be gcc $CFILE -o cisfun.

TASK 4: Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0
The filename is 4-puts.c

Explanation: quite simple right? yes. This says to create a C program, so yeah : I vi into the file "4-puts.c" #include <stdio.h> header file, then my comments, and the main function,and then open curly braces, and the function puts toprint exactly what was given in the task. One sweet thing about using the puts function is that it does not require "\n" to print a new line like the printf function. Remember to add the semicolons, the retun value and close curly braces.

TASK 5:



Well, just to hint you; they say C programming is fun, but let’s see how true that is. Winks
NB: remember to make your codes an executable file, it’s a script; to do that: it is chmod u+x filename
