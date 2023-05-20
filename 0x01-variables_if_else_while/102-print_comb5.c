#includ<stdio.h>
/*
 * main - main block
 * Descreption : prints all numbers from 1 to 99 in 2 combination
 * Return: 0
 */
int main()
{
	int x, y, z, q, r, s;
	x = 98;
	y = 99;

	for(int i = 0; i <= x; i++)
	{
		for (int w = 0; w <= y; w++)
		{
			z = i / 10;
			q = i % 10;
			r = w / 10;
			s = w % 10;

			if (i < w)
			{
				putchar(z + '0');
				putchar(q + '0');
				putchar(' ');
				putchar(r + '0');
				putchar(s + '0');
				if (i == 98 && w == 99)
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
}
