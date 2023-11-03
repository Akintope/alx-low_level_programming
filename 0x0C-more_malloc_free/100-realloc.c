#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - it reallocates memory size function
 * @ptr: is the pointer to address of old memory location
 * @old_size: is old memory size
 * @new_size: is new memory size
 * Return: pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s;

if (new_size > old_size)
{
s = malloc(new_size);
free(ptr);
return (s);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
s = malloc(new_size);
free(ptr);
return (s);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
