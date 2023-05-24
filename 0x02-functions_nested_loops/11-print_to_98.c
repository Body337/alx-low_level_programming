#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - always prints to 98
 * @n: a number to be given
 */
void print_to_98(int n)
{
	int hunds, tens, digit;

	if (n < 0)
	{
		hunds = (n * -1) / 100;
		digit = (n * -1) % 10;
		tens = ((n * -1) / 10) % 10;
	}
	else if (n > 0)
	{
		hunds = n / 100;
		digit = n % 10;
		tens = (n / 10) % 10;
	}

	if (n < 0)
	{
		for (; n < 98; n++)
		{
			if (n <= -100)
			{
				_putchar('-');
				_putchar(hunds + '0');
				_putchar(tens + '0');
				_putchar(digit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n > -100)
			{
				_putchar('-');
				_putchar(tens + '0');
				_putchar(digit + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n >=0 && n < 98)
	{
		for (; n < 98; n++)
		{
			if (n < 100 && n > 9)
			{
				_putchar(tens + '0');
				_putchar(digit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n < 10 )
			{
				_putchar(digit + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		
		for (; n > 98; n--)
		{
			if (n >= 100)
			{
				_putchar(hunds + '0');
				_putchar(tens + '0');
				_putchar(digit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n < 100)
			{
				_putchar(tens + '0');
				_putchar(digit + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}
