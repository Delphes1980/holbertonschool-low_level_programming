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

		if (n % 3 == 0)
		{
			printf("%s", fizz);
		}

		else if (n % 5 == 0)
		{
			printf("%s", buzz);
		}

		else if (n % 15 == 0)
		{
			printf("%s", fizzbuzz);
		}

		else
		{
			printf("%d", n);
		}

	putchar(' ');

	}

	putchar('\n');

	return (0);
}
