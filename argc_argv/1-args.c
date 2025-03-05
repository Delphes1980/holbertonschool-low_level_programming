#include <stdio.h>

/**
* main - returns an integer
* @argc: count of the arguments of the programm
* @argv: array of pointer to the strings that are argc arguments
*
* Return: Always 0
*/

int main(int __attribute__((unused)) argc, char *argv[])
{

	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", i);

	return (0);
}
