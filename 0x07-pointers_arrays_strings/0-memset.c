#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: a pointer to a char array
 * @b: a char to be replaced with
 * @n: number of bytes to be replaced
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; s++)
	{
		*s = b;
	}
	return (*s);
}
