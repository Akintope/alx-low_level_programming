#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}

