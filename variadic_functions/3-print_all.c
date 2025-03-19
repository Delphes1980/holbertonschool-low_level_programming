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

/**
* struct format - structure with different types of arguments
* @c: first element
* @i: second element
* @f: third element
* @s: fourth element
*
* Description: a structure that includes different types
* of arguments passed by the  users
*/

	struct format{
		char c
		int i
		float f
		char * s
	};

	int i = 0;

	va_list whole;

	va_start(whole, format);

	while (i < format[i])
	{
		if (format.c == va_arg(whole, char) &&
			format.i == va_arg(whole, int) &&
			format.f == va_arg(whole, float) &&
			format.s == va_arg(whole, char *);
			{
				if (format.s == NULL)
				{
					printf("%s", "(nil)");
				}
			}
			)

			printf("%s", format[i]);

		i++;
	}

	va_end(whole);

	printf("\n");
}