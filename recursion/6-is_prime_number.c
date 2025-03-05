#include "main.h"

/**
* is_prime_helper - cheks if the number is prime
* @n: number to be checked
* @i: current divisot being tested
*
* Return: 1 if n is a prime number otherwise 0
*/

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 1));
}

/**
* is_prime_number - returns if n number is prime
* @n: number to be checked
*
* Return: integer value
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, 2));
}
