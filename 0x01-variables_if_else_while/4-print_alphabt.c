#include <stdio.h>

/**
 * main - main block
 * Descreption; prints all alphabet except q e
 * Return: 0
 */
int main(void)
{
	char frist = 'a';
	char last = 'z';

	for (; frist <= last; frist++)
	{
		if (frist == 'q' || frist == 'e')
		{

		}
		else
			putchar(frist);
	}
	putchar('\n');
	return (0);

}
