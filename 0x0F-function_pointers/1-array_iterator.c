#include "function_pointers.h"
/**
 * array_iterator - makes an action on the array
 * @array: array of ints
 * @size: size of the array
 * @action: action to be taken on the array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			(*action)(array[x]);
		}
	}
}
