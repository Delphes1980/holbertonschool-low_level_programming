#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: parameter
*
* Return: 0 if n == 0 otherwise the sum of all the parameters
*/

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;

	va_list(args);

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
