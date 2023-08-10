#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocate b bytes of memory
 * @b: number of bytes to be allocated
 *
 * Return: return a pointer to the new array
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
		exit(98);

	return (arr);
}
