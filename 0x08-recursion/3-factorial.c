#include "main.h"

/**
  * factorial - is the first function parameter
  *
  * @n: second function parameter
  *
  * Return: function
  */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
