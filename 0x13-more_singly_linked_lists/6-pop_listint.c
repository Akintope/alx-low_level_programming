#include "lists.h"

/**
* pop_listint - It deletes the head node of a linked list
* @head: It points to the first element in the linked list
* Return: It returns the data inside the deleted elements
*/
int pop_listint(listint_t **head)
{
listint_t *t;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
