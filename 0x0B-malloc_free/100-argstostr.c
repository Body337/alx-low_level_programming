#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the porgram
 * @ac: number of arguments
 * @av: string array of arguments
 *
 * Return: pointer to the new array
 */
char *argstostr(int ac, char **av)
{
	int x, z, y, len = 0;
	char *a;


	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		z = 0;
		while (av[x][z])
		{
			len++;
			z++;
		}
		len++;
	}

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	z = 0;
	y = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			a[z] = av[x][y];
			z++;
		}
		a[z] = '\n';
		z++;
	}

	return (a);
}
