#include "main.h"

int a_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find the natural
 * square root of number
 * @n: number
 * @i: iterator
 *
 * Return: square root
 */
int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}
