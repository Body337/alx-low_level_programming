#include "main.h"
/**
 * _print_rev_recursion - work as puts recursion but in reverse
 * @s: a pointer to a char array
 * Return: nothing;
 */
void _print_rev_recursion(char *s)
{
	s++;

	if (*s != '\0')
	{
		_print_rev_recursion(s);
	}
	if (*(s - 1) != '\0')
	{
		_putchar(*(s - 1));
	}
}
