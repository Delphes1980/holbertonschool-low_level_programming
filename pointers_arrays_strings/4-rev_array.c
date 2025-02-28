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
	int i, j, temp;

	i = 0;

	if (i < n - 1)
	{
		_putchar(',');
		_putchar(' ');
	}

	for (; i < n; i++)

	j = n - 1;

	for (i = 0; i < j / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
