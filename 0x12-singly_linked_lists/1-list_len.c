#include "lists.h"
/**
 * list_len - Calculate the number of elements.
 * @i: Pointer to a list.
 * Return: Integer.
 **/
size_t list_len(const list_t *i)
{
const list_t *temp;
unsigned int counter = 0;
temp = i;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter);
}
