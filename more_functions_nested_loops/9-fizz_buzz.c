#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0
*/

int main(void)
{
	int n;
	char f = "Fizz";
	char b = "Buzz";
	char fb = "FizzBuzz";

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("%s", f);
		}

		else if (n % 5 == 0)
		{
			printf("%s", b);
		}

		else if (n % 15 == 0)
		{
			printf("%s", fb);
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
