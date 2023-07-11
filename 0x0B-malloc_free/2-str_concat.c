#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of inputs and add together
 * @s1: input one to str_concat
 * @s2: input two to str_concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *u;
	int i, v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = v = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[v] != '\0')
		v++;
	u = malloc(sizeof(char) * (i + v + 1));

	if (u == NULL)
		return (NULL);
	i = v = 0;
	while (s1[i] != '\0')
	{
		u[i] = s1[i];
		i++;
	}

	while (s2[v] != '\0')
	{
		u[i] = s2[v];
		i++, v++;
	}
	u[i] = '\0';
	return (u);
}
