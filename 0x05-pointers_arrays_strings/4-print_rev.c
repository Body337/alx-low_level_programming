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
	int i;

	i = _strlen(s);

	for (;i >= 0; i--)
	{
		*s = i - 1;
		_putchar(*s);
	}
}
