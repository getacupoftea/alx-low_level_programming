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

TASK 1: 

Well, just to hint you; they say C programming is fun, but let’s see how true that is. Winks

NB: remember to make your codes an executable file, it’s a script; to do that: it is chmod u+x filename
