#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size called size and assign char c
 * @size: size of the array
 * @c: character to assign
 * Description: create an array of size called size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
