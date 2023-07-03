#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where no. is stored
 *@src: memory where no. is copied
 *@n: of bytes
 *
 *Return: memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
