#include "main.h"

/**
* puts2 - print every character of a spring, starting with the first one
* @str: parameter
*
* Return: nothing
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
