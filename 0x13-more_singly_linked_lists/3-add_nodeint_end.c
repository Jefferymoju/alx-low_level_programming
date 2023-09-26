#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: A pointer to the address of the head of the list
 * @n: The integer for the new node to contain
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (last != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (new);
}
