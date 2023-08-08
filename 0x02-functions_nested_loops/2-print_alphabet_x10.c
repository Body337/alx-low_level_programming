#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabetbet 10  times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
