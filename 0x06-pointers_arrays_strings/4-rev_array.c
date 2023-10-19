#include "main.h"

/**
  * reverse_array - is the main faunction
  *
  * @a: is the function parameter
  *
  * @n: is the function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
