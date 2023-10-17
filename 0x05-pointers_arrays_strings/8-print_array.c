#include "main.h"
/**
  * print_array - is the function name
  * @a: is the first parameter
  * @n: is the second parameter
  */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
{
if (i < n - 1)
printf(", ");
}
printf("\n");
}
}
