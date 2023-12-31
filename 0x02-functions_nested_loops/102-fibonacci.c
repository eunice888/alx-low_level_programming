#include <stdio.h>

/**
 * Print first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int u;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (u = 0; u < 50; u++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (u == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
