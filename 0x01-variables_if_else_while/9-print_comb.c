#include <stdio.h>

/**
 * main - main block
 * Descreption: prints possible combnination
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x<=9)
	{
		putchar(x + '0');
		if (x<9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
