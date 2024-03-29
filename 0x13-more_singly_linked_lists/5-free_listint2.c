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
	listint_t *list;

	if (head)
	{
		while (*head)
		{
			list = (*head);
			(*head) = (*head)->next;
			free(list);
		}
	}
	else
		return;

	free(*head);
	head = 0;
}
