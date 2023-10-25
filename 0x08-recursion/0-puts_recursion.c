#include "main.h"

/**
  * _puts_recursion - is the main function
  *
  * @s: is the function parameter
  *
  * Return: Always 0.
  */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
