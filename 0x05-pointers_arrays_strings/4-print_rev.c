#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints the string in reverse order
 * @s: a pointer to the string str
 *
 * Return: 0 on success
 */
void print_rev(char *s)
{
	int x;
	char c[];

	x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	x = x - 1;

	for (; x >= 0; x--)
	{
		c[x] = *s;
		s++;
	}
	_putchar('\n');
}
