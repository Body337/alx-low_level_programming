#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of the 2 integars
 * @a: pointer to value a
 * @b: pointer to value b
 *
 * Return: 0
 */
void swap_int(int a*, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
