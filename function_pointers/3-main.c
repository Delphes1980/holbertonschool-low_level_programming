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
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[], ops[].op) != 0)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", ops[].f(num1, num2));

	return (0);
}
