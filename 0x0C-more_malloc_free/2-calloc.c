#include "main.h"
#include <stdlib.h>
/**
 * _calloc - works the same as calloc
 * @nmemb: an array of elements
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

	arr = malloc(size * nmeb);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		arr[x] = 0;
	}
	return (arr);
}
