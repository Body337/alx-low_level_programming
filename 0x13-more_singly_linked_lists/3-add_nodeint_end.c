#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - add a node at the end of a list
 * @head: a pointer to a list pointer
 * @n: int to be added
 *
 * Return: pointer to new elment
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (n != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (new);
		}
	}
	return (0);
}
