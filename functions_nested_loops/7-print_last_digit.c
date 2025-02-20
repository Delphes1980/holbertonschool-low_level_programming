#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to be checked
*
* Return: the value of the last digit of the number
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		return (10 - (n % 10));
	}

	else
	{
		return (n % 10);
	}
}
