#include "main.h"

/**
 * _strcmp - works the same as strcmp
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: 0 if simmiler
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int z = 0;

	for (i = 0; (*s1 != '\0' || *s2 != '0'); i++)
	{
		if (*(s1 + i) != *(s2 + 1))
		{
			z = (*s1 - *s2)
		}
		else
			continue;
	}
	return (z);
}
