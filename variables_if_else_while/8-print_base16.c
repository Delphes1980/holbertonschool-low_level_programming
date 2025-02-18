#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 0x7b;

	for (numbers = 0; numbers <= 15; numbers++)
		putchar(numbers + '0');

	putchar('\n');
	return (0);
}
