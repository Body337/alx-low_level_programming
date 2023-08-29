#include <stdlib.h>
#include "lists.h"
/**
  * sum_listint - sums the ints of the list
  * @head: pointer to list
  *
  * Return: sum of the ints
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
