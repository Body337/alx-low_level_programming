#include "main.h"

/**
 * _memcpy - copies n number from string src to string dest
 * @dest: a string to be modified
 * @src: string to be modified from
 * @n: number of char to be modified
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
