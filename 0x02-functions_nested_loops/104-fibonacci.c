#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * separated by comma and space.
 * Return: 0
 */
int main(void)
{
    int count;
    unsigned long fib1_high = 0, fib1_low = 1;
    unsigned long fib2_high = 0, fib2_low = 2;
    unsigned long sum_high, sum_low;

    printf("%lu, %lu, ", fib1_low, fib2_low);
    for (count = 3; count <= 98; count++)
    {
        sum_high = fib1_high + fib2_high;
        sum_low = fib1_low + fib2_low;

        if (sum_low >= 10000000000)  // Carry over if needed
        {
            sum_low -= 10000000000;
            sum_high++;
        }

        printf("%lu%010lu", sum_high, sum_low);

        if (count != 98)
            printf(", ");

        fib1_high = fib2_high;
        fib1_low = fib2_low;
        fib2_high = sum_high;
        fib2_low = sum_low;
    }

    printf("\n");
    return 0;
}

