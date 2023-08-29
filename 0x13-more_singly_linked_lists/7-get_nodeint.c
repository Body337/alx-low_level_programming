#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - return n at index
  * @head: pointer to list
  * @index: index of the list
  *
  * Return: null if not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *first, *temp;

	first = head;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (i != index)
		return (NULL);

	temp = head;
	head = first;

	return (temp);
}
