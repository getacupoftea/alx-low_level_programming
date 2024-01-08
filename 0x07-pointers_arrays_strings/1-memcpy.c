#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
