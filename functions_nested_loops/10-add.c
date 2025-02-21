#include "main.h"

/**
* add(int, int) - addition of 2 integers
* @num1 and @num2: the numbers to be added
*
* Return: returns the result of sum
*/

int add(int, int)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int sum = num1 + num2;

			if (sum > 9)
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
			_putchar(sum + '0');
		}
	_putchar('\n');
	}
return (0);
}
