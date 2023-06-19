#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u;

	for (u = 'z'; u >= 'a'; u--)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
} 
