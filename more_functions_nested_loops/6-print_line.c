#include "main.h"

/**
* print_line - draws a straight line
* @n: number of times the character '_' in printed
*
* Return: Always 0
*/

void print_line(int n)
{

	if (n > 0)
	{
		_putchar('_');
	}

	else
	{
		_putchar('\n');
	}
	n++;
	_putchar('\n');
}
