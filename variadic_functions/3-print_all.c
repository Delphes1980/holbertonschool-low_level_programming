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

	int i = 0;

	va_list whole;

	va_start(whole, format);

	while (i < format[i])
	{
		switch (format) {
			case c:
				printf("%s", va_arg(whole, char));
				break;

			case i:
				printf("%d", va_arg(whole, int));
				break;

			case f:
				printf("%f", va_arg(whole, float));
				break;

			case s:
				if (s == NULL)
				{
					printf("%s", "(nil)");
				}

				printf("%s", va_arg(whole, char *));
				break;
			}

			printf("%s", format[i]);

		i++;
	}

	va_end(whole);

	printf("\n");
}
