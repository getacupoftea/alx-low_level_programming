#include <stdio.h>

/**
 * main - entry point
 * a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Description: use only putchar,
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
}
