#include <stdio.h>
#include "main.h"
/**
 * _puts - the same as puts
 * @str: a pointer to a char array
 *
 * Return: 0 on success
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
