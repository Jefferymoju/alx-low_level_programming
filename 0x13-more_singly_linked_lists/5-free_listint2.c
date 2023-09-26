#include "lists.h"
/**
 * free_listint2 - Frees the linked list
 * @head : pointer to address of the head of the list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
head = NULL;
}
