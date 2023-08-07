#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array and initializes it with a char
 * @size: array size
 * @c: a char to be intiallized
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int z;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
	{
		array[z] = c;
	}
	return (array);
}
