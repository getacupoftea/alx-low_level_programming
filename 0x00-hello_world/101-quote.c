#include <unistd.h>

/**
 * main - entry point
 * a C program that prints exactly
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * followed by a new line to the standard error
 *
 * Return: 1(success)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, sizeof(str) - 1);

	return (1);
}
