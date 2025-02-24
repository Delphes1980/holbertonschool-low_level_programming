#include "main.h"

/**
* int _isupper - function that checks uppercase character
* @c: the character to be checked
*
* Return: return 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

	return (0);
}
