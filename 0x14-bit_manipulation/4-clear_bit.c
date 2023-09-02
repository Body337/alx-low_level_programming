#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Sets the value of a bit to 0 at a given index
  * @n: a pointer to int
  * @index: index of the bit
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((*n &= ~(1 << index)) ? 1 : -1);
}
