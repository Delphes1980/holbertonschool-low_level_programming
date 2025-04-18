#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* main - returns an integer
* @argc: count of the arguments of the programm
* @argv: array of strings containing the arguments
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
