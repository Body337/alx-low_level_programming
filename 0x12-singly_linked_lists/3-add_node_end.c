#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}/**
 * add_node_end - add node at the end of a list
 * @head: list
 * @str: string
 * Return: 0 on success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head  = new;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (temp);
		}
	}

	return (NULL);
}
