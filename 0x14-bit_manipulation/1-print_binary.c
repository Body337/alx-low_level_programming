#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * print_binary - Prints the binary representation of a number
  * @n: number
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
