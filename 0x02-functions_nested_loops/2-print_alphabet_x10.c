#include "main.h"

/**
 * print 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char u;
	int v;

	v = 0;

	while (v < 10)
	{
		u = 'a';
		while (u <= 'z')
		{
			_putchar(u);
			u++;
		}
		_putchar('\n');
		v++;
	}
}
