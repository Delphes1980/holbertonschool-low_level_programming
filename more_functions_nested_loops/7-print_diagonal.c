#include "main.h"

/**
* print_diagonal - print a diagonal line
* @n: parameter
*
* Return: nothing
*/

void print_diagonal(int n)
{

	int i, j;
	char sign = '\\';

	for (i = 0; i < n; i++)
	{
		
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
