#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}

		else if (n % 5 == 0)
		{
			printf("Buzz");
		}

		else if (n % 15 == 0)
		{
			printf("FizzBUzz");
		}

		else
		{
			printf("%d", n);
		}

	putchar(' ');
	}

	printf("\n");

	return (0);
}
