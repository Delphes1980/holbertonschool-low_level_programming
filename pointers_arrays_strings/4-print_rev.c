#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: parameter
*
* Return: nothing
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; *s != 0; s--)
	{
		i++;

		_putchar(*s);
	}

	_putchar('\n');
}
