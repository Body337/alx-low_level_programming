#include "main.h"
/**
 * _sqrt_recursion - gives the square root of a number
 * @n: an integer to be tested
 * Return: square root of n or -1 if not
 */
/**
 * sqrtn - gets the sqaure root of a number
 * @i: integar of test
 */
int sqrtn(int n, int i);
int _sqrt_recursion(int n)
{
	return (sqrtn(n, 1));
}
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
