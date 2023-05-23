#include <stdio.h>
#include "main.h"

/**
 * _islower - return 1 if the letter is lowercase
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
