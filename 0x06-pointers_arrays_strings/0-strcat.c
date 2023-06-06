#include <stdio.h>
#include "main.h"
/**
 * _strcat - works the same as strcat
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
