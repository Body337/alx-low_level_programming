#include <stdio.h>
#include "main.h"
/**
 * _strncat - works the same as strncat
 * @dest: a pointer to a string
 * @src: a pointer to another string
 * @n: an integar to be added
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;
	
	for (len = 0; dest[len] != '\0';)
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
