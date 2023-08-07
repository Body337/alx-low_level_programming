#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated memory
 * @str: a pointer to a string
 *
 * Return; a pointer to the newly allocated memory
 */
char *_strdup(char *str)
{
	int x = 0, i = 0;
	char *s;

	if (str[0] == '\0')
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	for (; x < i; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
