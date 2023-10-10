#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2, next;

    printf("%lu, %lu, ", fib1, fib2);

    for (count = 3; count <= 98; count++)
    {
        next = fib1 + fib2;
        printf("%lu", next);

        if (count != 98)
            printf(", ");

        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");
    return 0;
}

