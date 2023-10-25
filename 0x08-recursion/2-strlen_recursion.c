#include "main.h"

/**
  * _strlen_recursion - is the main function
  *
  * @s: is the function parameter
  *
  * Return: the lenght
  */
int _strlen_recursion(char *s)
{
int lenght = 0;
if (*s)
{
lenght++;
lenght += _strlen_recursion(s + 1);
}
return (lenght);
}
