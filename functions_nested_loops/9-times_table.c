#include "main.h"

/**
* times_table - check the code
*
* Return: Always 0
*/

void times_table(void)
{
	int num1, num2;

	for (num1 = '48'; num1 <= '57'; num1++)
	{

		for (num2 = '48'; num2 <= '57'; num2++)
		{
			int table = num1 * num2;

			_putchar(table + '0');
			_putchar(',');
			_putchar('.');
		}

			_putchar('\n');
	}
}
