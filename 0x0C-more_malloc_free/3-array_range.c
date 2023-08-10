#include "main.h"
#include <stdlib.h>
/**
 * array_range - make an array from min to max
 * @min: the frist member of the array
 * @max: the last member of the array
 *
 * Return: pointer ti the array
 */
int *array_range(int min, int max)
{
	int size;
	int i = 0;
	int *arr;


	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
