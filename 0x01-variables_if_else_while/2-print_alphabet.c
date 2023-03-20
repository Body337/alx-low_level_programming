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

	for (; alpha_bet <= last_bet; alpha_bet++)
	{
		putchar(alpha_bet);
	}
	putchar('\n');
	return (0);
}
