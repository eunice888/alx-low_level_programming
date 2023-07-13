#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat – puts n bytes of a string to another string
 * @s1: string that it to append to
 * @s2: string that it concatenate from
 * @n: bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, u = 0, v = 0;

	while (s1 && s1[u])
		u++;
	while (s2 && s2[v])
		v++;

	if (n < v)
		s = malloc(sizeof(char) * (u + n + 1));
	else
		s = malloc(sizeof(char) * (u + v + 1));

	if (!s)
		return (NULL);

	while (i < u)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < v && i < (u + n))
		s[i++] = s2[j++];

	while (n >= v && i < (u + v))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
