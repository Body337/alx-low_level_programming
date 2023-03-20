#include <stdio.h>

/**
 * main - main block
 * Descreption: prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	for (; a <= z; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return 0;
}
