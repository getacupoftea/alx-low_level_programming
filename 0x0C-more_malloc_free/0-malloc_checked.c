#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *@b: Number of bytes to allocate
 *
 *Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *man = malloc(b);

	if (man == NULL)
		exit(98);

	return (man);
}
