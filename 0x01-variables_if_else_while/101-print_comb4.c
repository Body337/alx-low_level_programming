#include <stdio.h>

/**
 * main - main block
 * Descreption: prints the combinations of three digits
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	a = 10;

	while (a < 1000)
	{
		b = a % 10;
		c = (a / 10) % 10;
		d = a / 100;

		if (d < b && d < c && c < b)
		{
			putchar(d + '0');
			putchar(c + '0');
			putchar(b + '0');

			if (a < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
