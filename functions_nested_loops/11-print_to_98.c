#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: the number that begins the list
*
* Return: Always 0
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int l = n; l <= 98; l++)
		{
			_putchar(l + '0');

			if (l != 98)
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	else
	{
		for (int l = n; l >= 98; l--)
		{
			_putchar(l + '0');

			if (l != 98)
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
