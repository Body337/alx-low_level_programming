#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Descreption: prints the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
