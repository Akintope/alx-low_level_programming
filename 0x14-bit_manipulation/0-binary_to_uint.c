#include "main.h"
/**
 * binary_to_uint - its a function that converts a binary number to unsigned int.
 * @b:is a  pointer to a string containing a binary number
 * Return: unsigned int with decimal value of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num;
num = 0;
if (!j)
return (0);
for (i = 0; j[i] != '\0'; i++)
{
if (j[i] != '0' && j[i] != '1')
return (0);
}
for (i = 0; j[i] != '\0'; i++)
{
num <<= 1;
if (j[i] == '1')
num += 1;
}
return (num);
}
