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
	int x;

	for (x = 0; *s != '\0'; s++)
	{
		x++;
	}

	s--;

	while (*s != '\0')
	{
		s = s - 1;

		_putchar(*(s + 0));
	}
	_putchar('\n');
}
