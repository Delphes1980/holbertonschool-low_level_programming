#include "main.h"

/**
* int _isupper - a function that checks for an uppercase character
* @c: the character to be checked
*
* Return: return 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	return (0);
}
