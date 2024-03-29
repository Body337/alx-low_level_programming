#include "main.h"
#include <stdlib.h>
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
	unsigned int sl1 = 0, sl2 = 0, z = 0, x = 0;
	char *arr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	while (s1[sl1])
		sl1++;
	while (s2[sl2])
		sl2++;

	if (n >= sl2)
		arr = malloc(sizeof(char) * (sl1 + sl2 + 1));
	else
		arr = malloc(sizeof(char) * (sl1 + n + 1));
	if (arr == NULL)
		return (NULL);

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
	arr[x] = '\0';

	return (arr);
}
