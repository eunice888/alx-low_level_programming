#include <stdio.h>

/**
 * main - prints least combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u, v, w;

	for (u = 48; u < 58; u++)
	{
		for (v = 49; v < 58; v++)
		{
			for (w = 50; w < 58; w++)
			{
				if (w > v && v > u)
				{
					putchar(u);
					putchar(v);
					putchar(w);
					if (u != 55 || v != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
} 
