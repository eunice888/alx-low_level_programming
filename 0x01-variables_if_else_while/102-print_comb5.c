#include <stdio.h>

/**
 * main - prints combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u, v;

	for (u = 0; u < 100; u++)
	{
		for (v = 0; v < 100; v++)
		{
			if (u < v)
			{
				putchar((u / 10) + 48);
				putchar((u % 10) + 48);
				putchar(' ');
				putchar((v / 10) + 48);
				putchar((v % 10) + 48);
				if (u != 98 || v != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
} 
