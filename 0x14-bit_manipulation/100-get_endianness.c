#include "main.h"
#include <stdio.h>
/**
 * get_endianness - if its MSB or LSB
 *
 * Return: 0 if MSB 1 if LSB
 */
int get_endianness(void)
{
	int num = 1;
	int *ptr = &num;

	if (*ptr & 1)
		return (1);
	return (0);
}
