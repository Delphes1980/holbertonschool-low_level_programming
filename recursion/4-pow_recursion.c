#include "main.h"

/**
* _pow_recursion - returns the values of x raised to the power of y
* @x: parameter
* @y: parameter
*
* Return: return -1 if y is lower than 0
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
