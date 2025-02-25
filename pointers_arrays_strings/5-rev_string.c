#include "main.h"

/**
* rev_string - function that reverses a string
* @s: parameter
*
* Return: nothing
*/

void rev_string(char *s)
{
	int i, j, temp;

	for (i = 0; s[i] != '\0'; s++)
	{
		i++;
	}

	temp = i;

	for (j = temp - 1; j != '\0'; j++)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
