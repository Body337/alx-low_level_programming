#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_c(va_list ap);
void print_i(va_list ap);
void print_f(va_list ap);
void print_s(va_list ap);
/**
 * print_all - print all type of formats
 * @format: types tb printed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	f_tp f[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};
	unsigned int i = 0, j = 0;

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *f[j].ch)
			{
				f[j].fun(ap);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
/**
 * print_c - prints char
 * @ap: something to be printed
 *
 * Return: nothing
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_c - prints char
 * @ap: something to be printed
 *
 * Return: nothing
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_c - prints char
 * @ap: something to be printed
 *
 * Return: nothing
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_c - prints char
 * @ap: something to be printed
 *
 * Return: nothing
 */
void print_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	printf("%s", str == NULL ? "(nil)" : str);
}
