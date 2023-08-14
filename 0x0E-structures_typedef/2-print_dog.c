#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (((*d).name) ? (*d).name : "(nil)"));
		printf("Age: %f\n", (((*d).age) ? (*d).age : 0));
		printf("Owner: %s\n", (((*d).owner) ? (*d).owner : "(nil)"));
	}
}
