#include "main.h"

/**
* print_line - function that draws a straight line
* @n: number of times the character '_' in printed
*
* Return: Always 0
*/

void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		_putchar('\n');

		n++;

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
