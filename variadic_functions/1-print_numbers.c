#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a new line
* @separator: the string to be printed
* @n: the number of integers passed to the function
*
* Return: nothing if separator is NULL otherwise the string
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(string, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(string);

	printf("\n");
}
