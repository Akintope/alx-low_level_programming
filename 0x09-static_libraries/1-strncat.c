#include "main.h"

/**
  * _strncat  - is the main function
  *
  * @n: is a function parameter
  *
  * @src: is a function parameter
  *
  * @dest: is a function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
	{
	k++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[k] = src[r];
	k++;
	r++;
	}
	dest[k] = '\0';
	return (dest);
}
