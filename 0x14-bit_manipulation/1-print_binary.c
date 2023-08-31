#include <stdlib.h>
#include <stdio.h>
#include "main.h"
void rec_num(unsigned long int n);
/**
  * print_binary - Prints the binary representation of a number
  * @n: number
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	rec_num(n);
}
/**
  * rec_num - print the binary in rec
  * @n: ...
  *
  * Return: ...
  */
void rec_num(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
