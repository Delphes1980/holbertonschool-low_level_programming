#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
*
* Return: (nil) if the string is NULL otherwise prints anything
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	const char *string, *s = "";

	va_list whole;

	va_start(whole, format);

	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", s, va_arg(whole, int));
				break;

			case 'i':
				printf("%s%d", s, va_arg(whole, int));
				break;

			case 'f':
				printf("%s%f", s, va_arg(whole, double));
				break;

			case 's':
				string = va_arg(whole, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", s, string);
				break;
		}
		s = ",";
		i++;
	}

	va_end(whole);
	printf("\n");
}
