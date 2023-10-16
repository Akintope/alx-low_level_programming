#include "main.h"
/**
  * print_rev - prints a string in reverse, followed by a new line
  * @s: is the function parameter
  */

void print_rev(char *s)

{
int i;
int total = 0;

for (i = 0; s[i] != '\0'; i++)
total++;

for (i = total - 1; i >= 0; i--)
_putchar (s[i]);
_putchar ('\n');
}
