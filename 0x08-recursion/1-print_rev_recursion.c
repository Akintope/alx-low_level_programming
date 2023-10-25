#include "main.h"

/**
  * _print_rev_recursion - is the main function
  *
  * @s: is the function parameter
  *
  * Return: 0
  */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
