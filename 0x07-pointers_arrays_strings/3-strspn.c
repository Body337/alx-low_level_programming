#include "main.h"
/**
 * _strspn - return the number of accepted chars in s
 * @s: a string to be tested
 * @accept: accepted chars
 *
 * Return: the number of accpeted chars in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int b = 0;

	for (; accept[b] != '\0'; b++)
	{
		int z = 0;

		while (s[z] != '\0')
		{
			if (s[z] == accept[b])
			{
				i++;
			}
			z++;
		}
	}
	return (i);
}
