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

	for (, *s != '\0', s++)
	{
		for (, *s != '\0', s++)
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

		if (*s >= '0' || *s <= '9')
		{
			if (*(s - 1) < '0' || *(s - 1) > '9')
			{
				_putchar(sign);
			}
			_putchar(*s);
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
			else
				continue;
		}
	}
}
