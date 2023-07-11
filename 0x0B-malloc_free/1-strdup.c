#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate it to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *u;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	u = malloc(sizeof(char) * (i + 1));

	if (u == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		u[r] = str[r];

	return (u);
}
