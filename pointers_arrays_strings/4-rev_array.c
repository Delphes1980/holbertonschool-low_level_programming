#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
*
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, k, temp;

	j = 0;

	k = 0;

	while (a[j] < n)
	{

		if (a[j] != '\0')
		{
			_putchar(',');
			_putchar(' ');
		}

		j++;
	}

	k = n - 1;

	for (i = 0; i < n / 2; j++)
	{
		temp = a[i];
		a[i] = a[k];
		a[k--] = temp;
	}
}
