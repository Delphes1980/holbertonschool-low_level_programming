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
		printf("%d", n);

		if (n % 3)
		{
			printf("%s", fizz);
		}

		else if (n % 5)
		{
			printf("%s", buzz);
		}

		else if (n % 3 && n % 5)
		{
			printf("%s", fizzbuzz);
		}
	putchar(' ');

	}

	putchar('\n');

	return (0);
}
