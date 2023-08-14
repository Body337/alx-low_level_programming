#include "dog.h"
/**
 * init_dog - intinaliez data to its variables
 * @d: astruct type
 * @name: a string
 * @age: a float
 * @owner: a string
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
