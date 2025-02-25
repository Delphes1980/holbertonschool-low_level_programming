#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: parameter
*
* Return: Always 0
*/

int _strlen(char *s)
{

	char i;

	for (i = 0; s[i] != '\0'; i++)

	_putchar(*s);

	return (0);
}
