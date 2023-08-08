#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of the two arguments
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0 on success 1if error
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", x);
	return (0);
}
