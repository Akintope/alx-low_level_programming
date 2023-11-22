#include "lists.h"

/**
* sum_listint - It calculates the sum of all the data in a list
* @head: The first node in the linked list
* Return: Returns the resulting sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *t = head;

while (t)
{
sum += t->n;
t = t->next;
}

return (sum);
}
