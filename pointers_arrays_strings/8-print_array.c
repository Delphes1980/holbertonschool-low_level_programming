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

	for (i = 0; i < n; i++)
	{

		if (*a != '\0')
		{
			printf("%d, ", *a++);
		}

		printf("%d", a[i]);

	}

	printf("\n");
}
