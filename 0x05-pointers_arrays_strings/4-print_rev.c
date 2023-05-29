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

	x = 0;

	for (; *str != '\0'; *str++)
	{
		x++;
	}

	x = x - 1;

	for (; x >= 0; x--)
	{
		*str = x;
		_putchar(*str);
	}
	_putchar('\n';)
}
