#include "lists.h"
/**
 * pop_listint - Deletes the head node of the list
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int j;

tmp = *head;

if (tmp == NULL)
return (0);

*head = tmp->next;
j = tmp->j;
free(tmp);
return (j);
}
