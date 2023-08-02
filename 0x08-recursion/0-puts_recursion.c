#include "main.h"
/**
 * _puts_recursion - puts with recursion
 * @s: a pointer to a char array
 * Return: nothing
 */
void _puts_recurstion(char *s)
{
	_putchar(*s);

	s--;

	if (s == "/0")
	{
		return;
	}
	else
		_puts_recursion(*s);
}
