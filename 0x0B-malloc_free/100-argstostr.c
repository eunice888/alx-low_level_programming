#include "main.h"
#include <stdlib.h>
/**
 * argstostr – the main entry
 * @ac: the int input
 * @av: the double-pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *u;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	u = malloc(sizeof(char) * l + 1);
	if (u == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		u[r] = av[i][n];
		r++;
	}
	if (u[r] == '\0')
	{
		u[r++] = '\n';
	}
	}
	return (u);
}
