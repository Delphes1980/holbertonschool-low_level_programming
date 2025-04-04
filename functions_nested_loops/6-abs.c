#include "main.h"
/**
*_abs - Computes the absolute value of an integer.
* @n: The number to be computed.
*
* Return: Absolute value of number or zero
*/

int _abs(int n)

{
	if (n < 0)
	{
	int abs_value;

	abs_value = (-1) * n;

	return (abs_value);
	}

	return (n);
}
