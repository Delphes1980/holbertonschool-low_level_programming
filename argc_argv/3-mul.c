#include <stdio.h>
#include <stdlib.h>

/**
* main - returns an integer
* @argc: count of the arguments of the programm
* @argv: array of strings containing the arguments
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{

		mul = (atoi(argv[i])) * (atoi(argv[2]));

		printf("%d\n", mul);
	}

	return (0);
}
