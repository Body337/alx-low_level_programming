#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - split strings into words
 * @str: an array of a string
 *
 * Return: a pointer to the new string array of words
 */
int number_of_words(int x, char *str);
int str_len(char *str);
void freeall(char **ar, int x);
char **strtow(char *str)
{
	int n, len, i = 0, j = 0, z = 0, x = 0, c = 0;
	char **a;

	if (str == NULL || *str == 0)
		return (NULL);

	len = str_len(str);
	n = number_of_words(len, str);
	a = malloc(sizeof(char *) * n);

	if (a == NULL)
	{
		return (NULL);
		free(a);
	}

	for (; i < len && j < n;)
	{
		if (str[i] == ' ')
			i++;
		else
		{
			z = i;
			for (; str[i] != ' '; i++)
				x++;

			a[j] = malloc((sizeof(char) * x) + 1);

			if (a[j] == NULL)
			{
				freeall(a, j);
				return (NULL);
			}
			while (str[z] != '\0' && str[z] != ' ')
			{
				a[j][c] = str[z];
				c++;
				z++;
			}
			a[j][c] = '\0';
			j++;
			c = 0;
			x = 0;
			i++;
		}
	}
	return (a);
}

/**
 * number_of_words - gives the number of words in the string
 * @x: number of chars in the string
 * @str: pointer to the string
 *
 * Return: number of words
 */
int number_of_words(int x, char *str)
{
	int z = 0, y = 0;

	while (y < x)
	{
		if (str[y] == ' ')
		{
			y++;
		}
		else
		{
			for (; str[y] != ' ' && y < x;)
				y++;
			z++;
		}
	}
	return (z);
}

/**
 * str_len - gives the string length
 * @str: string
 *
 * Return: the string length
 */
int str_len(char *str)
{
	int n;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
/**
 * freeall - free all memory
 * @ar: a char array
 * @x: number of arrays
 *
 * Return: nothing
 */
void freeall(char **ar, int x)
{
	for (; x > 0;--x)
		free(ar[x]);
	free(ar);
}
