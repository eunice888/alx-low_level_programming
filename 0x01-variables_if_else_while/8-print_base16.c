#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;

	for (u = 48; u < 58; u++)
	{
		putchar(u);
	}
	for (u = 97; u < 103; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
} 
