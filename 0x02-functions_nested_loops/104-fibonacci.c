#include <stdio.h>

/**
 * main - fibonacci 
 *
 * no hardcode numbers
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int u;
	unsigned long int e = 1;
	unsigned long int f = 2;
	unsigned long int l = 1000000000;
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int d;

	printf("%lu", e);

	for (u = 1; u < 91; u++)
	{
		printf(", %lu", f);
		aft += e;
		e = aft - e;
	}

	a = (e / l);
	b = (e % l);
	c = (f / l);
	d = (f % l);

	for (u = 92; u < 99; ++u)
	{
		printf(", %lu", c + (d / l));
		printf("%lu", d % l);
		c = c + a;
		a = c - a;
		d = d + b;
		b = d - b;
	}
	printf("\n");
	return (0);
}
