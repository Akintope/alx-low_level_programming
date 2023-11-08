#include "function_pointers.h"
/**
 * int_index - it searchs if an integer place comparison
 * @array: is the target array holding int
 * @size: is the array size
 * @cmp: is the function pointer to compare search int
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int k;

if (array == NULL || cmp == NULL)
return (-1);

for (k = 0; k < size; k++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
