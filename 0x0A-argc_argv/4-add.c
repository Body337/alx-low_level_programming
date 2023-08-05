#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Prints the sum of args positive numbers
  * @argc: number of arguments
  * @argv: string of arguments
  *
  * Return: 0 on success
  */
int main(int argc, char **argv)
{
	int i = 0;
	unsigned int k, sum = 0;
	char *e;

	for (; i < argc; i++)
	{
		e = argv[i];

		for (k = 0; k < strlen(e); k++)
		{
			if (e[k] < '0' || e[k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
