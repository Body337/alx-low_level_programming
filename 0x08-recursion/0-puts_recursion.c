#include "main.h"
/**
 * _puts_recursion - puts with recursion
 * @s: a pointer to a char array
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	s++;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_puts_recursion(s);
}
