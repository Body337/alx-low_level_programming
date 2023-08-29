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
	listint_t *temp, *first;
	int n;

	if (head)
	{
		n = (*head)->n;
		first = (*head)->next;

		while ((*head)->next)
		{
			temp = (*head)->next;
			(*head)->n = temp->n;
			(*head)->next = temp->next;
		}
		*head = first;
	}
	else
		return(0);
	return (n);
}
