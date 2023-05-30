#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints the string in reverse order
 * @s: a pointer to the string str
 *
 * Return: 0 on success
 */
void print_rev(char *s)
{
	int x, c;

	for (x = 0; *s != '\0'; s++)
	{
		x++;
	}
	c = 0;

	while (c < x)
	{
		s--;
		c++;

		if (*s != '\0')
		{
			_putchar(*(s));
		}

	}
	_putchar('\n');
}
