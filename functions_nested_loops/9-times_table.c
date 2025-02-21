#include "main.h"

/**
* times_table - check the code
*
* Return: Always 0
*/

void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{
			int table = num1 * num2;

			_putchar(table + '0');

			if (table > 9)
			{
				_putchar((table / 10) + '0');
				_putchar((table % 10) + '0');
			}
			else
			{
			_putchar(',');
			_putchar('.');
			}
		}

			_putchar('\n');
	}
}
