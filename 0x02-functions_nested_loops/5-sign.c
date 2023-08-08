#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints every sign
 * @n: an integer to be cheacked
 *
 * Return: 1 if n is greater than zero or 0 if zero else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
