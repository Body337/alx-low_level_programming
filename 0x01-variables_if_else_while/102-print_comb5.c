#include<stdio.h>
/*
 * main - main block
 * Descreption : prints all numbers from 1 to 99 in 2 combination
 * Return: 0
 */
int main()
{
	int x, y, z, q, r, s;
	x = 0;
	y = 0;

	for(x = 0; x <= 98; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			z = x / 10;
			q = x % 10;
			r = y / 10;
			s = y % 10;

			if (x < y)
			{
				putchar(z + '0');
				putchar(q + '0');
				putchar(' ');
				putchar(r + '0');
				putchar(s + '0');
				if (x == 98 && y == 99)
				{
					
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');
	return (0);
}
