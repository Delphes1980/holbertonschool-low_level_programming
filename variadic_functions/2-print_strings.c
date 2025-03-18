#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings followed by a new line
* @separator: the string to be printed between the strings
* @n: number of strings passed to the function
*
* Return: nothing if separator is NULL, (nil) if one of the string is NULL
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *letter;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		letter = va_arg(string, char *);

		if (letter == NULL)
		{
			printf("%s", "(nil)");
		}

		else
		{
			printf("%s", letter);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
