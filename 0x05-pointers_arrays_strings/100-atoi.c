#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to an integar
 * @s: a pointer to a string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	char sign = '+';
	int nb = 0;

	for (; *s != '\0'; s++)
	{
		for (; *s != '\0'; s++)
		{
			if (*s == ' ' || *s == '+' || *s == '-')
			{
				if (*s == '+' && sign == '-')
				{
					sign = '-';
				}
				else if (*s == '-' && sign == '-')
				{
					sign = '+';
				}
				else if (*s == '-' && sign == '+')
				{
					sign = '-';
				}
			}
		}

		if (*s >= 48 && *s <= 57)
		{
			nb = nb + (*s - 48);
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
			else
			{
				nb = nb * 10;
				continue;
			}
		}
	}
	if (sign == '-')
	{
		nb = (nb * -1);
	}
	return (nb);
}
