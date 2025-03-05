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
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);

	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
