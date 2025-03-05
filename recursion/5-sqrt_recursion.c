#include "main.h"

/**
* _helper_sqrt - calculates the natural square root
* @n: number to calculate the square root
* @x: itérate number
*
* Return: the natural square root
*/

int _helper_sqrt(int n, int x)
{
	int helper_sqrt = x * x;

	if (helper_sqrt == n)
	{
		return (x);
	}

	if (helper_sqrt > n)
	{
		return (-1);
	}

	return (_helper_sqrt(n, x + 1));
}

/**
* _sqrt_recursion - returns the natural square of a number
* @n: number to calculate the square root
*
* Return: -1 if n doesn,'t have a natural square root
*/

int _sqrt_recursion(int n)
{
	return (_helper_sqrt(n, 1));
}
