#include "main.h"

/**
* reset_to_98 - updates the value to 98
* @n: parameter
*
* Return: nothing
*/

void reset_to_98(int *n)
{

	int f;

	f = 402;
	n = &f;

	_putchar(f);

	*n = 98;

	_putchar(n);

}
