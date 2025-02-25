#include "main.h"

/**
* puts2 - print every character of a spring, starting with the first one
* @str: parameter
*
* Return: nothing
*/

void puts2(char *str)
{
	char n;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		_putchar(*str);
	}

	_putchar('\n');

}
