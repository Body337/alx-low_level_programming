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
	int sign = 1;
	INT_MIN nb1 = 0;
	INT_MAX nb = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == ' ' || *s == '+' || *s == '-')
		{
			if (*s == '+' && sign == -1)
			{
				sign = -1;
			}
			else if (*s == '-' && sign == -1)
			{
				sign = 1;
			}
			else if (*s == '-' && sign == 1)
			{
				sign = -1;
			}
		}
		if (*s >= '0' && *s <= '9')
		{
			nb = nb + (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
			else
			{
				nb = nb * 10;
			}
		}
	}
	if (sign == -1)
	{
		nb1 = nb;
		return (nb1 * sign);
	}
	else
		return (nb * sign);
}
