#include <stdio.h>

/**
 * main - main block
 * Descreption: prints number using putchar
 * Return: 0
 */
int main(void)
{
	int x = 0;

	for (; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
