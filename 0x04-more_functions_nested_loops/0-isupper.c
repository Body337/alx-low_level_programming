#include "main.h"

/**
 * _isupper - checks if letter is uppercase or lowercase
 * @c: an integar to a letter
 *
 * Return: 1 if upper 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
