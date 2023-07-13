#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * z - check if a string contains a non-digit char
 * @s: the string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int z(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @k: number of thearguments
 * @h: array of many arguments
 *
 * Return: always 0 (Success)
 */
int main(int k, char *h[])
{
	char *s1, *s2;
	int u, v, len, i, carry, r, y, *result, a = 0;

	s1 = h[1], s2 = h[2];
	if (k != 3 || !z(s1) || !z(s2))
		errors();
	u = _strlen(s1);
	v = _strlen(s2);
	len = u + v + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= u + v; i++)
		result[i] = 0;
	for (u = u - 1; u >= 0; u--)
	{
		r = s1[u] - '0';
		carry = 0;
		for (v = _strlen(s2) - 1; v >= 0; v--)
		{
			y = s2[v] - '0';
			carry += result[u + v + 1] + (r * y);
			result[u + v + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[u + v + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
