#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to string
 * @accept: pointer to string containing the bytes to search for
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
