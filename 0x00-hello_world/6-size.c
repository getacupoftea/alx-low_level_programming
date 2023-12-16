#include <stdio.h>

/**
 * main - a C program that prints the size of various types
 * on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
	char letter;
	int number;
	long int num;
	long long int d;
	float decimalNumber;

	printf("Size of a char: %d byte(s)\n", sizeof(letter));
	printf("Size of an int: %d byte(s)\n", sizeof(number));
	printf("Size of a long int: %d byte(s)\n", sizeof(num));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(decimalNumber));

	return (0);
}


