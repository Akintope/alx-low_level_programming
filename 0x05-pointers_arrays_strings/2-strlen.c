#include "main.h"
/**
  * int _strlen - Is the name of the function
  * @s: is the function parameter
  * Return: is the lenght of the string
  */ 

int _strlen(char *s)
{
int i;
int total = 0;

for (i =0; s[i] != '\0'; i++)
	total++;
return (total);
}
