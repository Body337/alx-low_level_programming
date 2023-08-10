#include "main.h"
#include <stdlib.h>
/**
 * _realloc - works the same as realloc
 * @ptr: an arry of any type
 * @old_size: old size of the array
 * @new_size: new size of the array
 *
 * Return: pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *arr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return(NULL);
		return (arr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	arr = malloc(new_size);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		arr[x] = ((char *) ptr)[x];
	}
	free(ptr);
	return (arr);
}
