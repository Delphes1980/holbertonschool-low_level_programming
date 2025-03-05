#include <stdio.h>

/**
* main - returns an integer
* @argc: count of the arguments of the programm
* @argv: array of strings containing the arguments
*
* Return: Always 0
*/

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
