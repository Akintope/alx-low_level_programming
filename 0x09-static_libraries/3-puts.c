#include "main.h"
/**
  * _puts - is the name of the function
  * @str: is the function parameter
  */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar (str[i]);
_putchar ('\n');
}
