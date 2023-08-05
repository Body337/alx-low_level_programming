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
	int i = 0;
	int b = 0;
	int z = 0;

	for (; s[b] != '\0'; b++)
	{
		for (; accept[z] != '\0'; z++)
		{
			if (s[b] == accept[z])
			{
				i++;
			}
		}
	}
	return (i);
}
