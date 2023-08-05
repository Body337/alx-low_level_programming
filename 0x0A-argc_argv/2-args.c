#include <stdio.h>
/**
 * main - prints all the arguments that got passed
 * @argc: number of arguments passed to the function
 * @argv: string of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++;)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
