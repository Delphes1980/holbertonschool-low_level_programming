#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
}
	else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
}
	else if ((lastd > 0) && (lastd < 6))
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
	return (0);
}
