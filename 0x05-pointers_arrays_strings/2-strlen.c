#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s:the input string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}
