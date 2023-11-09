#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>

/**
* print_numbers - Prints the numbers.
* @separator: The string to be printed between the numbers.
* @n: Is the number of integers passed to the function.
* @...: A variable number of numbers to be printed.
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list nums;
		unsigned int index;


		va_start(nums, n);


		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(nums, int));


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(nums);
}
