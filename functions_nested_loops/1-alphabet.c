#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	_putchar(print_alphabet);
	_putchar('\n');

	return (0);
}
