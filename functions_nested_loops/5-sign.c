#include "main.h"

/**
* print_sign - check the code
* @n: character to check
* Return: 1 if n greater than 0 and prints +
* 0 if n = 0 and prints 0
* -1 if n is less than 0 and prints -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
	}

	return (-1);
}
