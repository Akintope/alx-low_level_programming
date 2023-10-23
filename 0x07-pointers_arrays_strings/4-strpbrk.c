#include "main.h"

/**
  * _strpbrk - is the main function of the prototype
  *
  * @s: is the function parameter
  *
  * @accept: is the function parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	return (s + i);
	}
	}
	return (0);
}
