#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: the n time table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			if (i * j <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j));
			}
			else if (i * j >= 10 && i * j  <= 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			else if (i * j >= 100 && i * j <= 999)
			{
				_putchar(' ');
				_putchar('0' + ((i * j) / 100));
				_putchar('0' + (((i * j) % 100) / 10));
				_putchar('0' + ((i * j) % 10));
			}
		}
		_putchar('\n');
	}
}
