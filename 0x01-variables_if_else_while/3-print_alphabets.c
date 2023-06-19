#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int u;

	for (u = 0; u < 52; u++)
	{
		putchar(alp[u]);
	}
	putchar('\n');
	return (0);
} 
