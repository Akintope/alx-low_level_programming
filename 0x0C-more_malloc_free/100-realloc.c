#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - it prints buffer
 * @buffer: is the address of memory
 * @size: is the size of the memory
 * Return: 0
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int k;

k = 0;
while (k < size)
{
if (k % 10)
{
printf(" ");
}
if (!(k % 10) && k)
{
printf("\n");
}
printf("0x%02x", buffer[k]);
k++;
}
printf("\n");
}

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
char *p;
int k;

p = malloc(sizeof(char) * 10);
if (p ==NULL)
{
return (1);
}
p = realloc(p, sizeof(char) * 98);
if (p == NULL)
{
free(p);
return (1);
}
k = 0;
while (k < 98)
{
p[k++] = 98;
}
simple_print_buffer(p, 98);
free(p);
return (0);
}
