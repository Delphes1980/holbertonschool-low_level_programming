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

	if (i % 2 == 0)
	{
		_putchar(*str);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	_putchar('\n');

}
