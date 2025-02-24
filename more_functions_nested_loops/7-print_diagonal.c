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
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(sign);

			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
