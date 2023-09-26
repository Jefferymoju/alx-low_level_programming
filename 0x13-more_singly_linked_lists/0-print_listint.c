#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nods = 0;

	while (h)
	{
		nods++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nods);
}
