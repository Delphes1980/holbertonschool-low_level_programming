#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of the triangle
*
* Return: nothing
*/

void print_triangle(int size)
{
	int i, j, k;
	char sign = '#';

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < (size - i - 1); k++)
		{
			_putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{
			_putchar(sign);
		}
		_putchar('\n');
	}
}
