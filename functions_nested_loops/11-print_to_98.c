#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: the number that begins the list
*
* Return: Always 0
*/

void print_to_98(int n)
{

	for (n <= 0; n <= 98; n++)
	{

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		_putchar(n + '0');
	}

	_putchar('\n');

}
