#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to be checked
*
* Return: the value of the last digit of the number
*/

int print_last_digit(int n)
{
	int lastn;

	lastn = n % 10;

	if (lastn < 0)
	{
		lastn = lastn * (-1);
	}

	_putchar(lastn + '0');

	return (lastn);
}
