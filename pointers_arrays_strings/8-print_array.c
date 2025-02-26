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

	while (a[i] != '\0')
	{

		for (j = 0; j < n; j++)
		{
			printf("%d, ", *a++);
		}

		i++;
	}
	printf("\n");
}
