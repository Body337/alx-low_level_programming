#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - add to strings to a newly allocated memory
 * @s1: frist string
 * @s2: second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, i = 0, z = 0;
	char *s;

	while (s1[x])
	{
		x++;
	}
	while (s2[i])
	{
		i++;
	}

	s = malloc(sizeof(char) * (x + i));

	if (s == NULL)
		return (NULL);

	for (; z < x; z++)
	{
		s[z] = s1[z];
	}
	for (; z < (x + i); z++)
	{
		s[z] = s2[z - x];
	}
	return (s);
}
