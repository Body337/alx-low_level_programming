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
	int x, y, z, i;

	i = 0;
	z = 0;

	for (x = 0; *src != '\0';src++)
	{
		z++;
		x++;
	}
	for (y = 0; *dest != '\0'; dest++)
	{
		y++;
	}

	x = y + x;
	y++;

	while (y < x && i < z)
	{
		dest[y] = src[i];
		y++;
		i++;
	}
	return (dest);
}
