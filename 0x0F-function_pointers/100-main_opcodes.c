#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its main function
* @argc: the number of arguments passed
* @argv: the array of arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
		int bytes, k;
		char *arr;


		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}


		bytes = atoi(argv[1]);


		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}

		arr = (char *)main;


		for (k = 0; k < bytes; k++)
		{
			if (k == bytes - 1)
			{
				printf("%02hhx\n", arr[k]);
				break;
			}
			printf("%02hhx ", arr[k]);
		}
		return (0);
}
