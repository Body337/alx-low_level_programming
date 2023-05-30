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

	x = x - 1;

	for (; x >= 0; x--)
	{
		_putchar(*(s - x));
	}

	_putchar('\n');
}
