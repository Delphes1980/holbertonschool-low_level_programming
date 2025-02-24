#include "main.h"

/**
* more_numbers - prints 10 times the numbers
*
* Return: Always 0
*/

void more_numbers(void)
{

	int num;

	for (num = 0; num <= 14; num++)

	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');

	_putchar('\n');
}
