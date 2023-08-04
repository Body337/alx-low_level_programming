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
	for (; *s1 != '\0';)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}

		s1++;
		s2++;
	}
	return (0);
}
