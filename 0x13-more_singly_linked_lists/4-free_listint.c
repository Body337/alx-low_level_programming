#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list
 * @head: pointer to the list
 *
 * Retunr: nothing
 */
void free_listint(listint_t *head)
{
	list_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list->n);
		free(list);
	}
	free(head);
}
