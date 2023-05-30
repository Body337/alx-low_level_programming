#include <stdio.h>
#include "main.h"
/**
 * puts2 - put the other char every time
 * @str: a string to be printed
 *
 * Return: 0 on success
 */
void puts2(char *str)
{
	int x, c;

	x = 0;
	c = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	while (c < x)
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar('\n');
}
