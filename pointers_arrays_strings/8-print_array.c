#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @n: parameter
* @a: parameter
*
* Return: nothing
*/

void print_array(int *a, int n)
{

	int i;

	if (i != '\0')
	{
		printf("%d, ");
	}

	for (i = 0; i < n; i++)
	{
		printf(*a++);
	}

	printf("\n");
}
