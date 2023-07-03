#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory
 * @b: desired value
 * @n: bytes to be changed
 *
 * Return: changed array with different value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}