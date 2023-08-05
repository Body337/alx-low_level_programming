#include "main.h"
/**
 * _strpbrk - search for a letter from accepted chars
 * @s: a string to be tested
 * @accept: accepted chars
 *
 * Return: pointer to ths frist accpeted char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int b = 0;

	for (;s[i] != '\0'; i++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[i] == accept[b])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
