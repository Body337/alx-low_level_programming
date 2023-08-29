#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head: pointer to the list
 *
 * Retunr: nothing
 */
void free_listint2(listint_t **head)
{
	list_t *list;

	while (*head)
	{
		list = (*head);
		(*head) = (*head)->next;
		free(list->n);
		free(list);
	}
	free (*head)
	head = 0;
}
