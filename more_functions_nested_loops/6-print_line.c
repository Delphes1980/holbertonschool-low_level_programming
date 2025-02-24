#include "main.h"

/**
* print_line - check the code
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

	else if (n <= 0)
	{
		_putchar('\n');
	}

	n++;
	_putchar('\n');
}
