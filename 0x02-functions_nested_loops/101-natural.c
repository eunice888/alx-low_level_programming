#include <stdio.h>

/**
 * List all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int u, sum = 0;

	for (u = 0; u < 1024; u++)
	{
		if ((u % 3) == 0 || (u % 5) == 0)
			sum += u;
	}

	printf("%d\n", sum);

	return (0);
}
