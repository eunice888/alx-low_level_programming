#include <stdlib.h>
#include "main.h"

/**
 * u - count the number of words in a string
 * @s: the string to evaluate
 *
 * Return: number of words in a string
 */
int u(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **m, *h;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = u(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				h = (char *) malloc(sizeof(char) * (c + 1));
				if (h == NULL)
					return (NULL);
				while (start < end)
					*h++ = str[start++];
				*h = '\0';
				m[k] = h - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	m[k] = NULL;

	return (m);
}
