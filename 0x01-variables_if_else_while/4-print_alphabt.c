#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;

	for (u = 97; u < 123; u++)
	{
		if (u != 101 && u != 113)
		{
			putchar(u);
		}
	}
	putchar('\n');
	return (0);
} 
