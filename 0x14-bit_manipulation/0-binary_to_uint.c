#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - change from binary to dicimal
 * @b: a string of 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, sum = 0, len;

	if (b)
	{
		while (b[i])
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			i++;
		}
		len = i;

		while (len--)
		{
			if (b[len] == '1')
				sum += (1 << j);
			j++;
		}
	}
	return (sum);
}
