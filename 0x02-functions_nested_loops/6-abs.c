#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of a integar
 * @n: integer to be tested
 * return : absolute n
 */
int _abs(int n);
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
