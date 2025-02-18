#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int suite;

	for (suite = 0; suite < 10; suite++)
{
	if (suite == 9)
{
	continue;
}
		putchar(suite);
}

	putchar(',');

	putchar ();

	putchar('\n');
		return (0);
}
