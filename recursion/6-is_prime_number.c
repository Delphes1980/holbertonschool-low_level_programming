#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: number to be checked
* @p: modulus to compute the factorial modulus
* Return: factorial of a given number
*/

int factorial(int n, int p)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1, p) % p);
}

/**
* is_prime_number - returns 1 if a number is a prime number or 0 if not
* @n: number to be checked
*
* Return: 1 if n is a prime number otherwise 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	int fact_mod_n;

	fact_mod = factorial(n - 1, n);

	if (fact_mod_n == n - 1)
	{
		return (1);
	}

	return (0);
}
