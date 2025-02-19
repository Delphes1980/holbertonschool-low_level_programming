#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{

	for (int x = 10; x < 11; x++)
	{
		char alphabet_x10;

		for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
		{
			_putchar(alphabet_x10);
			_putchar('\n');
		}
	}
}
