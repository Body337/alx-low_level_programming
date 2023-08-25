#include <stdlib.h>
#include "lists.h"

/**
  * free_list - free the list.
  * @head: a list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}

	free(head);
}
