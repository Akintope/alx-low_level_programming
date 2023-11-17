#include <stdio.h>
#include "lists.h"

/**
* print_list -it  prints iall the elements of the linked list
* @h: is the pointer to the list to print
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t x = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
x++;
}
return (x);
}
