#include "main.h"

/**
* print_diagonal - print a diagonal line
* @n: parameter
*
* Return: nothing
*/

void print_diagonal(int n)
{

	char sign = '\';

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				_puthcar(sign);

			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
