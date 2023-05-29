#include <stdio.h>
#include "main.h"
/**
 * _strlen - works the same as strlen
 * @s: is a char to be tested
 *
 * Return: the sum on success
 */
int _strlen(char *s)
{
	int c = 0;
	
	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
