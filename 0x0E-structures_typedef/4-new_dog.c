#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - makes a new dog
 * @name: a string
 * @age: a float
 * @owner: string
 *
 * Return: NULL of failuare
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namel = 0, ownerl = 0;

	if (name == NULL)
	{
		namel = _strlen(name) + 1;
		ownerl = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);
		dog->name = malloc(sizeof(char) * namel);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * ownerl);

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}
	return (dog);
}
/**
 * _strcpy - copy the string in another string
 * @dest: a pointer to a string
 * @src: a string to be copied
 *
 * Return: a char to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	for (size = 0; src[size] != '\0';)
	{
		size++;
	}

	for (i = 0; (i < size && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * _strlen - works the same as strlen
 * @s: is a char to be tested
 *
 * Return: the sum on success
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
