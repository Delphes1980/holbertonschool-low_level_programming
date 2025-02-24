#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0
*/

int main(void)
{
	int n;
	char fizz = "Fizz";
	char buzz = "Buzz";
	char fizzbuzz = "FizzBuzz";

	for (n = 1; n <= 100; n++)
	{
		putchar(n);

		if (n % 3)
		{
			putchar(fizz + '0');

		else if (n % 5)
			putchar(buzz + '0');

		else (n % 3 && n % 5)
			putchar(fizzbuzz);
		}
	}

	putchar('\n');
}
