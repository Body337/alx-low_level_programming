#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: a string name
 * @f: a function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
