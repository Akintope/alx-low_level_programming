#include "lists.h"

/**
* get_nodeint_at_index - It returns the node in a linked list
* @head: Thefirst node in the linked list
* @index: Its the index of the node to return
* Return: I returns the pointer to th node we need
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *t = head;

while (t && i < index)
{
t = t->next;
i++;
}

return (t ? t : NULL);
}
