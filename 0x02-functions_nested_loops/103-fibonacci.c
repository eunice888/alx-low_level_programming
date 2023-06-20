#include <stdio.h>

/**
 * find and print the sum of the even valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;
	unsigned long int v, w, next, sum;

	v = 1;
	w = 2;
	sum = 0;

	for (u = 1; u <= 33; ++u)
	{
		if (v < 4000000 && (v % 2) == 0)
		{
			sum = sum + v;
		}
		next = v + w;
		v = w;
		w = next;
	}

	printf("%lu\n", sum);

	return (0);
}
