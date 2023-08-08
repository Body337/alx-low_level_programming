#include <stdio.h>

/**
 * main - main block
 * Descreption: prints all base 16 number
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'f';
	int x = 0;

	for (; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (; a <= z; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
