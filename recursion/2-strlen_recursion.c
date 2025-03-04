#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: parameter
*
* Return: Always 0
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return(*s);
	}

	s++;
	_strlen_recursion(s + 1);

	return (0);
}
