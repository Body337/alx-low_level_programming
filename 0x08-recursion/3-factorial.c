#include "main.h"
/**
 * factorial - prints the factorial of the number
 * @n: an intager to get its factorial
 * Return: the value of the factorial
 */
int factorial(int n)
{
	int sum = n;

	if (n == 0)
	{
		return (sum++);
	}
	else if (n < 0)
	{
		return (-1);
	}
	sum = sum * (factorial(n-1))
}
