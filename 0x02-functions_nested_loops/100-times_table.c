#include "main.h"

/**
 * print the n times table, starting with 0
 * n-times table number
 */
void print_times_table(int n)
{
	int u, v, w;

	if (n >= 0 && n <= 15)
	{
		for (u = 0; u <= n; u++)
		{
			for (v = 0; v <= n; v++)
			{
				w = v * u;
				if (v == 0)
				{
					_putchar(w + '0');
				} else if (w < 10 && v != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(w + '0');
				} else if (w >= 10 && w < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((w / 10) + '0');
					_putchar((w % 10) + '0');
				} else if (w >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((w / 100) + '0');
					_putchar(((w / 10) % 10) + '0');
					_putchar((w % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
