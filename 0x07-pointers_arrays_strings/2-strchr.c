#include "main.h"

/**
 * strchr - search for char c in string s
 * @s: pointer to a string
 * @c: a char to be searched for
 * 
 * Return : pointer to s or null if c not found
 */
char *_strchr(char *s, char c)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
