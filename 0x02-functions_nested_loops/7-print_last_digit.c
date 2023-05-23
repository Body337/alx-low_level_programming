#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: to be tested
 * Return: the value of the lastt digit
 */
int print_last_digit(int n)
{
	_putchar((n%10) + '0');
	return(n%10);
}
