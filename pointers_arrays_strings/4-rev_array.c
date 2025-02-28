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
	int i, temp;

	i = 0;

	while (a[i] != '\0')
	{
		i++;
	}

	temp = *a;

	for (n = temp - 1; n >= 0; n--)
	{
		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}
