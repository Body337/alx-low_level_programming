#include "function_pointers.h"
/**
 * int_index - return the index of the number
 * @array: an array of numbers
 * @size: size of the array
 * @cmp: a functionn pointer
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
