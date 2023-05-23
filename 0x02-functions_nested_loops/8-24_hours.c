#include <stdio.h>
#include "main.h"
/**
 * jaske_bauer - prints 00:00 to 23:59
 *
 * Return: 0 on success
 */
void jask_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for(y = 0; y <= 59; y++)
		{
			_putchar((x/10) + '0');
			_putchar((x%10) + '0');
			_putchar(':');
			_putchar((y/10) + '0');
			_putchar((y%10) + '0');
			_putchar('\n');
		}	
	}
	return (0);
}
