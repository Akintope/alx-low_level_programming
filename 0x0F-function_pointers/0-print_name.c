#include "function_pointers.h"
/**
 * print_name - is a function that prints a name
 * @f: is a variable to hold the string name
 * @name: is the name of the person
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
