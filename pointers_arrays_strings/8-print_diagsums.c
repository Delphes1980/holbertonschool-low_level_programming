#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of 2 diagonals of a square matrix
* @a: matrix
* @size: parameter
* Return: sum of the diagonals:
*/

void print_diagsums(int *a, int size)
{
	int i;

	int first = 0;
	int second = 0;

	for (i = 0; i < size; i++)
	{
		first += a[(size + 1) * i];
		second += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", first, second);
}
