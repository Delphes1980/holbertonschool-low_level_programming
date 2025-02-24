#include "main.h"

/**
* int _isupper - a function that checks for an uppercase character
* @c: the character to be checked
*
* Return: return 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	for (c >= 'a'; c <= 'z'; c++)
	{

		if (c >= 'A' && c <= 'Z')
		{
		return (0);
		}

	_putchar('\n');
	return (1);
	}
}
