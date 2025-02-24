#include "main.h"

/**
* print_square - prints a square
* @size: size of the square
*
* Return: nothing
*/

void print_square(int size)
{
	int i, j;
	char sign = '#';

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(sign);
		}

		_putchar('\n');
	}
}
