#include <stdio.h>
#include "main.h"

/**
 * print all natural numbers from n to 98,
 * followed by a new line
 * n-print from this number
 */
void print_to_98(int n)
{
	int u, v;

	if (n <= 98)
	{
		for (u = n; u <= 98; u++)
		{
			if (u != 98)
				printf("%d, ", u);
			else if (u == 98)
				printf("%d\n", u);
		}
	} else if (n >= 98)
	{
		for (v = n; v >= 98; v--)
		{
			if (v != 98)
				printf("%d, ", v);
			else if (v == 98)
				printf("%d\n", v);
		}
	}
}
