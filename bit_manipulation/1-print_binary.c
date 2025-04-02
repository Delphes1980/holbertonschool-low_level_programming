#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: the number to be representated
*
* Return: nothing
*/

void print_binary(unsigned long int n)
{
	/*mask for the most significant bit*/
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	/*variable to track if we have encountered the first significant bit*/
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/*loop from the most significant to the least one*/
	while (mask > 0)
	{
		if (n & mask) /*check if the current bit is activated (1)*/
		{
			_putchar('1');
			leading_zero = 0;
		}

		else
		{
	/*print the next 0 if we have already encountered a significant bit*/
			if (leading_zero == 0)
			{
				_putchar('0');
			}
		}

		mask >>= 1; /*shift to the right to the next bit*/
	}

	/*if no significant bit found, the number is zero*/
	if (leading_zero == 1)
	{
		_putchar('0');
	}
}
