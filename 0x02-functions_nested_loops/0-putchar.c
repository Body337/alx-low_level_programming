#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * prints _putcahr
 * Return: 0;
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;


	for (; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
