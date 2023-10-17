#include "main.h"
 /**
   * my_strcpy - copies a string from source to destination
   * @dest: the first parameter
   * @src: the second parameter
   * Return: 0
   */

char *my_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
