#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 * @s: a string to be reversed
 *
 * Return: 0 on success
 */
void rev_string(char *s)
{
	int x, c;
	char z, w;

	for (x = 0; s[x] != '\0';)
	{
		x++;
	}

	x--;

	c = 0;

	while (x != c)
	{
		z = s[x];
		w = s[c];
		s[x] = w;
		s[c] = z;
		c++;
		x--;
	}
}
