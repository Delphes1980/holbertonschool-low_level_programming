#include "main.h"

/**
* int _isupper - a function that checks for an uppercase character
* @c: the character to be checked
*
* Return: return 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
