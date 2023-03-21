#include <stdio.h>

/**
 * main - main block
 * Descreption: prints the different combination of two digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a%10;
		c = a/10;

		if (c < b)
		{
			putchar(b + '0');
			putchar(c + '0');

			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
