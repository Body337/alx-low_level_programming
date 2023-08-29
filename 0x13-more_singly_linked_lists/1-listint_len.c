#include "lists.h"
#include <stdio.h>
/**
 * listint_len - number of elment on the list
 * @h: pointer to the list
 *
 * Return: number of lists
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
