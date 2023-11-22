#include "lists.h"

/**
* add_nodeint - It adds a new node at the beginning of a linked list
* @head: It is the pointer to the first node
* @n: It is the data to insert in the new node
* Return: It returns a pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
