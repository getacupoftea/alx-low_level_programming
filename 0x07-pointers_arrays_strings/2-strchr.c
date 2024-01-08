#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to the character
 * @c: the character to be located
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
