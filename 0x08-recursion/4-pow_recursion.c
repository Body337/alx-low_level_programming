#include "main.h"
/**
 * _pow_recursion - the result of the pow
 * @x: and integar to be multiplied y times
 * @y: a number of how many times x multiplies
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}
	else if (y < 0)
	{
		return - 1;
	}
	x = x * _pow_recursion(x, y-1);
	return x;

}
