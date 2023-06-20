#include "main.h"

/**
 * print the last digit of a number
 * n-integer to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int u;

	if (n < 0)
	n = -n;

	u = n % 10;

	if (u < 0)
		u = -u;

	_putchar(u + '0');

	return (u);
}
