#include "main.h"
/**
  * putshalf -the name of the function
  * @str: the function parameter
  */

void puts_half(char *str)
{
int i;
int n;
int total = 0;

for (i = 0; str[i] != '\0'; i++)
total++;
n = (total - 1) / 2;

for (i = n + 1; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
