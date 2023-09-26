#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: A pointer to the head of the list to be freed.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
