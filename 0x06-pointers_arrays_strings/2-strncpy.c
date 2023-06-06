#include <stdio.h>
#include "main.h"
/**
 * _strncpy - work the same as strncpy
 * @dest: a pointer to a string
 * @src: a pointer to another string
 * @n: an integar
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, end;

	len = 0;
	end = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (; src[end] != '\0'; end++)
	{
		dest[end] = src[end];
	}

	return (dest);
}
