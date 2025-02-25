#include "main.h"

/**
* puts_half - prints the second half of the string
* @str: parameter
*
* Return: nothing
*/

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i / 2; j < (i -1); j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
