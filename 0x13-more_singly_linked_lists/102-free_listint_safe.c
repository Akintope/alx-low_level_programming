#include "lists.h"

/**
* free_listint_safe -It frees up a linked list
* @m: is the pointer to the first node in the linked list
* Return: It returns a number of elements in the freed list
*/
size_t free_listint_safe(listint_t **m)
{
size_t len = 0;
int diff;
listint_t *t;

if (!m || !*m)
return (0);

while (*m)
{
diff = *m - (*m)->next;
if (diff > 0)
{
t = (*m)->next;
free(*m);
*m = t;
len++;
}
else
{
free(*m);
*m = NULL;
len++;
break;
}
}

*m = NULL;

return (len);
}
