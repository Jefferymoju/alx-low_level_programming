#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The singly linked list_t list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t n_of_nodes = 0;

	while (h)
	{
		n_of_nodes++;
		h = h->next;
	}

	return (n_of_nodes);
}
