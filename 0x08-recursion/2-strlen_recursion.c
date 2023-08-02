#include "main.h"
/**
 * _strlen_recursion - counts the string using recursion
 * @s: a pointer to and array of char
 * Return: number of char in a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}

	s++;
	
	len = len + (_strlen_recursion(s))
	return (1);
}
