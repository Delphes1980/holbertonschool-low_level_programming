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

	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		printf("%d, ", *a++);
	}

	printf("\n");
}
