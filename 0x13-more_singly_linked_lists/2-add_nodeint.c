#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - add a node at the start of a list
 * @head: a pointer to a list pointer
 * @n: int to be added
 *
 * Return: pointer to new elment
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}
	return (0);
}
