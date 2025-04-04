#include "main.h"

/**
* puts2 - print every character of a spring, starting with the first one
* @str: parameter
*
* Return: nothing
*/

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');

}
