#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - delete the head node
 * @head: adress of a pointer to a list
 *
 * Return: n of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n = 0;

	if (*head != NULL)
	{
		first = (*head)->next;
		n = (*head)->n;
		*head = first;
	}
	return (n);
}
