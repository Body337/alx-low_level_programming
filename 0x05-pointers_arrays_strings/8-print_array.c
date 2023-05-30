#include <stdio.h>
#include "main.h"
/**
 * print_array - prints an array
 * @a; a pointer to the array
 * @n: the size of the array
 *
 * Return: 0 on success
 */
void print_array(int *a, int n)
{
	int z[n] = *a;
	int x;

	x = 0;

	for (; x < n; x++)
	{
		printf("%d", z[x]);
		printf(", ");
	}
	printf('\n');
}
