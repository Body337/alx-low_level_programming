#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n);
/**
  * insert_nodeint_at_index - add n at index idx
  * @head: pointer to list
  * @idx: index to be added to
  * @n: number to be added
  *
  * Return: pointer to the added node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *next;

	if (head)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		next = *head;
		while (next && i < idx)
		{
			next = next->next;
			i++;
		}
		if (i != idx)
			return (NULL);
		node->next = next->next;
		next->next = node;

		return (node);
	}
	else if (!head && i == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->next = *head;
		*head = node;
	}
	return (NULL);
}
