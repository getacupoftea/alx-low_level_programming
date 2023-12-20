#include <stdio.h>

/**
 * main -entry point
 * a C program that prints the alphabet in lowercase
 * to use only the putchar function
 *
 * Return: 0(success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}
