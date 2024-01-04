#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, on a new line
 * @s: the input string
 * Return: 0
 */

void print_rev(char *s)
{

	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
