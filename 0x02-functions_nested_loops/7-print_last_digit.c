#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: to be tested
 * Return: the value of the lastt digit
 */
int print_last_digit(int n)
{
	int x;
	if (n < 0)
	{
		n = n * -1; 
	}
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
