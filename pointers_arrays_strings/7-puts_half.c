#include "main.h"

/**
* puts_half - prints the second half of the string
* @str: parameter
*
* Return: nothing
*/

void puts_half(char *str)
{
	int i, j, start;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		start = i /2;
	}

	else
	{
		start = (i + 1) / 2;
	}

	for (j = start; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
