#include "main.h"

/**
 * _isdigit - cheack if is varuable is a digit or not
 * @c: an integer to be tested
 *
 * Return: 1 if number is digit 0 if else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
