#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: parameter
*
* Return: nothing
*/

void print_rev(char *s)
{
	int i, j, temp;

	while (i = 0; s[i] != '\0')
	{
		i++;
	}

	temp = i;

	for (j = temp - 1; j >= 0; j--)
	{
		_putchair(s[j]);
	}

	_putchar('\n');
}
