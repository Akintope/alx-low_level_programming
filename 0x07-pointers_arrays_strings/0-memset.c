#include "main.h"

/**
  * _memset -  is the main function of the prototype
  *
  * @b: is the value used to fill the memory
  *
  * @s: is the function paramater
  *
  * @n: is the function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
