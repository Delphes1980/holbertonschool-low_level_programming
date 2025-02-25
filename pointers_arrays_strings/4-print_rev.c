#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: parameter
*
* Return: nothing
*/

void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)

	_putchar('\n');
}
