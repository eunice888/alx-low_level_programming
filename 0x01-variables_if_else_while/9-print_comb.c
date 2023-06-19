#include <stdio.h>

/**
 * main - prints least combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;

	for (u = 48; u < 58; u++)
	{
		putchar(u);
		if (u != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
