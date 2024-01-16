#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int f, r = 0;

	if (str == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		r++;

	duplicate = malloc(sizeof(char) * (r + 1));

	if (duplicate == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		duplicate[f] = str[f];

	duplicate[r] = '\0';

	return (duplicate);
}
