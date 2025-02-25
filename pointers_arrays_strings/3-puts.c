#include "main.h"

/**
* _puts - prints a string follow by a new line
*@str: parameter
*
* Return: nothing
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		i++;
	}

	_putchar(i);

	_putchar('\n');

}
