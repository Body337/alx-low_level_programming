#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int x = 1;

	do {
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		x++;
	} while (h->next != NULL);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	return (x++);

}
