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
			if (n >= 100)
			{
			_putchar(((n) / 100) + '0');
			_putchar((((n) / 10) % 10) + '0');
			_putchar(((n) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
			else if (n < 100 && n !> 10)
			{
			_putchar(((n) / 10) + '0');
			_putchar(((n) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			_putchar(((n) % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			if (n < 0)
			{
				n = n * -1;

				if (n < 100)
				{
					_putchar('-');
					_putchar(((n) / 100) + '0');
					_putchar((((n) / 10) % 10) + '0');
					_putchar(((n) % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (n > 100)
				{
					_putchar('-';)
					_putchar(((n) / 10) + '0');
					_putchar(((n) % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (n < 100 && n !> 10)
			{
			_putchar(((n) / 10) + '0');
			_putchar(((n) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			_putchar(((n) % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
