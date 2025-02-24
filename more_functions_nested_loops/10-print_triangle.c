#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of the triangle
*
* Return: nothing
*/

void print_triangle(int size)
{
	int i, j;
	char sign = '#';

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j--)
		{
			_putchar(sign);
		}
		_putchar('\n');
	}
}
