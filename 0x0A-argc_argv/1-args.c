#include <stdio.h>

#include "main.h"

/**
 * main - it prints the number of arguments passed down to the program
 * @argc: is the number of arguments
 * @argv: is the array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
(void) argv; /*Ignore argv*/

printf("%d\n", argc - 1);

return (0);
}
