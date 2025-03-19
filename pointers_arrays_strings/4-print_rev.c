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

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	temp = i;

	for (j = temp - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
