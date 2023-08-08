#include <stdio.h>
#include "main.h"
/**
 * _isalpha - cheacks for letter
 * @c: the parametter to be cheacked
 *
 * Return: 1 if letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
