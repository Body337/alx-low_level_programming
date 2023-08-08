#include <stdio.h>

/**
 * main - main block
 * Description: takes an upper case letter
 * and display it in lower case
 * Return: 0
 */
int main(void)
{
	char alpha_bet = 'a';
	char last_bet = 'z';
	char A = 'A';
	char Z = 'Z';

	for (; alpha_bet <= last_bet; alpha_bet++)
	{
		putchar(alpha_bet);
	}
	for (; A <= Z; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
