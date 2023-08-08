#include "main.h"

int sqrtn(int n, int i);

/**
 * _sqrt_recursion - gives the square root of a number
 * @n: an integer to be tested
 * Return: square root of n or -1 if not
 */
int _sqrt_recursion(int n)
{
	return (sqrtn(n, 1));
}
/**
 * sqrtn - gives the square root of a number
 * @n: number to get its root
 * @i: starting number
 *
 * Return: the root
 */
int sqrtn(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	return (sqrtn(n, i + 1));
}
