#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate a 2 dimenstional array
 * @width: the frist dimension array
 * @height: the second dimension array
 *
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int x = 0, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);

		if (array[x] == NULL)
		{
			for (z = x; z >= 0; z--)
			{
				free(array[z]);
			}

			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			array[x][z] = 0;
		}
	}
	return (array);
}
