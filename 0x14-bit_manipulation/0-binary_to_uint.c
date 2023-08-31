#include "main.h"
#include <stdio.h>
#include <stdlib.h>
unsigned int _pow(unsigned int p);
/**
 * binary_to_unit - change from binary to dicimal
 * @b: a string of 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, num = 0, end = 0;

	if (b)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			i++;
		}
		end = i - 1;
		i = 0;
		while (end >= i)
		{
			if (b[end] == '1')
				num = num + _pow(j);
			end--;
			j++;
		}
	}
		return (num);
}
/**
 * _pow - get the number 2 to the power of n
 * @p: power
 * Return: number
 */
unsigned int _pow(unsigned int p)
{
	unsigned int num = 1, i = 0;

	while (i < p && p != 0)
	{
		num = num * 2;
		i++;
	}
	return (num);
}
