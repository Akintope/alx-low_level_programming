#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer to the first node in the list
* Return: pointer to the first node in the new list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *r = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = r;
r = *head;
*head = next;
}

*head = r;

return (*head);
}
