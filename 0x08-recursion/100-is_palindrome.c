#include "main.h"
int palindrome(char *s);
int len(char *s);
/**
 * is_palindrome - test if the string is palindrome or not
 * @s: a pointer to a string
 *
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (palindrome(s));
	}
}
/**
 * palindrome - check if the string is palindrome or not
 * @s: string to be checked
 *
 * Return: 0 if not palindrome 1 if it is
 */
int palindrome(char *s)
{
	int l = len(s) - 1;

	if ((l + 1) % 2 != 0)
	{
		if (*s == s[l] && *(s + (l / 2) - 1) == s[l - (l / 2)])
		{
			return (1);
		}
		else
			return (0);
	}
	else
	{
		if (*s == s[l])
		{
			return (1);
		}
		return (0);
	}
}
/**
 * len - calculate the len of the string
 * @s: a string
 *
 * Return: the len of the string
 */
int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;

	return (len(s) + 1);
}
