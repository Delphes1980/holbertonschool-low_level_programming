#include "main.h"

/**
* check_prime - returns ifa number is prime
* @n: number to be checked
*
* Return: integer value
*/

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0 && i > 1)
	{
		return (0);
	}

	if ((n / 1) < i)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}

/**
* is_prime_number - returns 1 if a number is a prime number or 0 if not
* @n: number to be checked
*
* Return: 1 if n is a prime number otherwise 0
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
