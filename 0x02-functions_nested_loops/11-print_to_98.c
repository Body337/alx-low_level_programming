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
		_putchar(n);
		for (; n < 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if(n < 98)
	{
		_putchar(n);
		for (; n > 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(n);
	_putchar('\n');
}
