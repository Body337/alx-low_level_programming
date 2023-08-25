#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - len of string
 * @s: string
 * Return: len of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * add_node - adds a node
 * @head: pointer to a list
 * @str: string
 * Return: pointer to new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head != NULL && str != NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = *head;

		*head = node;

		return (node);
	}
	return (0);
}
