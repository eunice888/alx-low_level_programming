#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int u;

	for (u = 0; u < 26; u++)
	{
		putchar(alp[u]);
	}
	putchar('\n');
	return (0);
}
