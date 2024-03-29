#include "main.h"
#include <stdlib.h>
/**
 * _calloc - works the same as calloc
 * @nmeb: an array of elements
 * @size: size of the array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *arr;
	unsigned int x;

	if (nmeb == 0 || size == 0)
		return (NULL);

	x = size * nmeb;
	arr = malloc(x);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < (size * nmeb); x++)
	{
		arr[x] = 0;
	}

	return (arr);
}
