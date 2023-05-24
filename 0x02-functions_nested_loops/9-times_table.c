#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the time table
 *
 * Return: nothing
 */
void times_table(void)
{
	int row, column, num;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 8; column++)
		{
			num = row * column;

			if (column == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				if (num < 10 && num == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
					_putchar(',');
					continue;
				}
				else if (num >= 10)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
					_putchar(',');
					continue;
				}
			}
		}
		_putchar('\n');
	}
}
