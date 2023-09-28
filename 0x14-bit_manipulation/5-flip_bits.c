#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - ...
  * @n: ...
  * @m: ...
  *
  * Return: ...
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, count = 0;

	num = m ^ n;

	while (num)
	{
		if (num & 1)
			count++;
		num >>= 1;
	}
	return (count);
}
