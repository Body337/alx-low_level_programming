#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints from the middle of the string
 * @str: a string to be printed
 *
 * Return: 0 on success
 */
void puts_half(char *str)
{
	int x, half;

	for (x = 0; str[x] != '\0';)
	{
		x++;
	}

	if ((x + 1) % 2 == 0)
	{
		half = (x - 1) / 2;
	}
	else
	{
		half = (x - 1) / 2;
	}

	for (; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');

}
