#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0; numbers < 10; numbers++)
		putchar(numbers + '0');

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');
	return (0);
}
