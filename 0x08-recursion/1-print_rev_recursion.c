#include "main.h"
/**
 * _print_rev_recursion - work as puts recursion but in reverse
 * @s: a pointer to a char array
 * Return: nothing;
 */
void _print_rev_recursion(char *s)
{
	++s;

	if (*s != '\0')
	{
		_print_rev_recursion(s);
	}
	_putchar(*s);
	if (*s == '\n')
	{
		_putchar('\n');
	}
}
