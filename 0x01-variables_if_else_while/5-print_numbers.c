#include <stdio.h>

/**
 * main - main block
 * Descerption: prints all number from 0 to 9
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
