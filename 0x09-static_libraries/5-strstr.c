#include "main.h"

/**
  * _strstr - is the main function
  *
  * @needle: is the function parameter
  *
  * @haystack: is the function parameter
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *H = haystack;
	char *N = needle;

	while (*H == *N && *N != '\0')
	{
	H++;
	N++;
	}
	if (*N == '\0')
	return (haystack);
	}
	return (0);
}
