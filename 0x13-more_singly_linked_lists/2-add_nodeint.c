#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a linked list
 * @head: A pointer to the head of the list
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails -NULL. otherwise -
 * the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
