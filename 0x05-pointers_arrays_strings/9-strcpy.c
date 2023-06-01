#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy the string in another string
 * @dest: a pointer to a string
 * @src: a string to be copied
 *
 * Return: a char to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	for(size = 0; src[size] != '\0';)
	{
		size++;
	}

	for (i = 0; i < size && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return dest;
}
