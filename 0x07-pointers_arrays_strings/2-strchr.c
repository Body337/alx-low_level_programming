#include "main.h"

/**
 * strchr - search for char c in string s
 * @s: pointer to a string
 * @c: a char to be searched for
 * 
 * Return : pointer to s or null if c not found
 */
char *_strch(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
