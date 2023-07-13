#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create an array of many integers
 * @min: minimum range of the values 
 * @max: maximum range of the values stored
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *u;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	u = malloc(sizeof(int) * size);

	if (u == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		u[i] = min++;

	return (u);
}
