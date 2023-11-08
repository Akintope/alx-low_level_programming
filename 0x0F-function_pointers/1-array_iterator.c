#include "function_pointers.h"
/**
 * array_iterator - it iterates through an array and prints each array element
 * @array: is the target array
 * @size: array size of elements to print
 * @action: function pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;

if (array == NULL || action == NULL)
return;

for (k = 0; k < size; k++)
{
action(*array);
array++;
}
}
