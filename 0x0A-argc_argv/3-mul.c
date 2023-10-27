#include "main.h"
#include <stdio.h>

/**
 * main - it multiplies two numbers.
 * @argc: it is the number of arguments.
 * @argv: it is the array of arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3 || sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
{
printf("Error.\n");
return (1);
}
result = num1 * num2;

printf("Result: %d\n", result);

return (0);
}
