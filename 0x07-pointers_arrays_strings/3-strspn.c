#include "main.h"

/**
  * _strspn - is the main function
  *
  * @s: is the function parameter
  *
  * @accept: is the function parameter
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int j;

	while (*s)
	{
	for (j = 0; accept[j]; j++)
	{
	if (*s == accept[j])
	{
	i++;
	break;
	}
	else if (accept[j + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
