#include "main.h"

int c_pal(char *s, int i, int len);
int _strlen_r(char *s);

/**
 * is_palindrome - cs if a string is a palindrome
 * @s: reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (c_pal(s, 0, _strlen_r(s)));
}

/**
 * _strlen_r - returns the length of a string
 * @s: calculate the length of
 *
 * Return: length of the string
 */
int _strlen_r(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_r(s + 1));
}

/**
 * c_pal - cs the characters recursively for palindrome
 * @s: c string
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int c_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (c_pal(s, i + 1, len - 1));
}
