#include "main.h"
#include <stdlib.h>
int strl(char *s);
/**
 * string_nconcat - add the frist n bytes of s2 to s1
 * @s1: the frist string
 * @s2: the second string
 * @n: number of bytes to be copied
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl1, sl2, z = 0, x = 0;
	char *arr;
	
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	sl1 = strl(s1);
	sl2 = strl(s2);
	arr = malloc(sizeof(*arr) * (sl1 + sl2 + 1));
	
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (x < sl1)
	{
		arr[x] = s1[x];
		x++;
	}

	while (s2[z] != '\0' && z < n)
	{
		arr[x] = s2[z];
		z++;
		x++;
	}

	x++;
	arr[x] = '\0';

	return (arr);
}
/**
 * strl - return the string length
 * @s: the string
 *
 * Return: length of the string
 */
int strl(char *s)
{
	int z;

	while (*s != '\0')
	{
		z++;
		s++;
	}
	return (z);
}
