#include "main.h"

/**
  * _memcpy - is the main function prototype
  *
  * @src: is the source parameter
  *
  * @dest: is the destination parameter
  *
  * @n: is the function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
