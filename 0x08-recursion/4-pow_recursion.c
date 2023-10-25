#include "main.h"
/**
  * _pow_recursion - is the name of the function
  * @x: is the first parameter
  * @y: is the second parameter
  * Return: the value of a number thats passed to the function
  */


int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);

else if (y == 0)
return (1);

else
return (x * _pow_recursion(x, (y - 1)));

return (0);
}
