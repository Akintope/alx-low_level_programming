#include "lists.h"

/**
 * free_listint - It frees up a linked list
 * @head: is the  list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *t;

while (head)
{
t = head->next;
free(head);
head = t;
}
}

