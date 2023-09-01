#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;

	if (n)
	{
		return ((n & 1) ? 1 : 0);
	}
	return (-1);
}
