#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - always prints to 98
 * @n: a number to be given
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			if (n > 100)
			{
			_putchar(((n - 1) / 100) + '0');
			_putchar(((n - 1) / 10) + '0');
			_putchar(((n - 1) % 10) + '0');
			}
			else if (n < 100)
			{
			_putchar(((n - 1) / 10) + '0');
			_putchar(((n - 1) % 10) + '0');
			}
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			if (n > 100)
			{
			_putchar(((n - 1) / 100) + '0');
			_putchar(((n - 1) / 10) + '0');
			_putchar(((n - 1) % 10) + '0');
			}
			else if (n < 100)
			{
			_putchar(((n - 1) / 10) + '0');
			_putchar(((n - 1) % 10) + '0');
			}
		}
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
