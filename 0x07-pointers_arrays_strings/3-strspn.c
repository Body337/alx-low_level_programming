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

	for (; s[b] != '\0';)
	{
		int z = 0;

		while (accept[z] != '\0')
		{
			if (s[z] == accept[b])
			{
				i++;
				break;
			}
			z++;
		}
			if (accept[z] == '\0')
			{
				return (i);
			}
		b++;
	}
	return (i);
}
