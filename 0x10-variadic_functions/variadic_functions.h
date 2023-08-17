#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct types - Struct format_types
 * @ch: what to print
 * @fun: function pointer
 */
typedef struct types
{
	char *ch;
	void (*fun)(va_list ap);
} f_tp;
#endif
