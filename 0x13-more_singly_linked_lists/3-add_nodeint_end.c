#include "lists.h"

/**
* add_nodeint_end -It adds a node at the end of the linked list
* @head: its the pointer to the first element in this list
* @n: It is the data to insert in the new element
 * Return: It returns a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *m;
listint_t *t = *head;

m = malloc(sizeof(listint_t));
if (!m)
return (NULL);

m->n = n;
m->next = NULL;

if (*head == NULL)
{
*head = m;
return (m);
}

while (t->next)
t = t->next;

t->next = m;
return (m);
}
