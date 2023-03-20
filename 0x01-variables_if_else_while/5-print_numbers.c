#include <stdio.h>

/**
 * main - main block
 * prints all number from 0 to 9
 * returns 0
 */
int main(void)
{
	int x = 0;

	while (x<10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
