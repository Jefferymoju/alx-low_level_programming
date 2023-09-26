#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained
 *                     in a listint_t linked list
 * @head : A pointer to the head of the linked list
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tort, *har;

if (head == NULL || head->next == NULL)
return (NULL);

tort = head->next;
har = (head->next)->next;

while (har)
{
if (tort == har)
{
tort = head;

while (tort != har)
{
tort = tort->next;
har = har->next;
}

return (tort);
}

tort = tort->next;
har = (har->next)->next;
}

return (NULL);
}
