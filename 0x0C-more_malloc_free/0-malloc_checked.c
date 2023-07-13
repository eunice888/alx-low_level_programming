#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked – allocate the memory using malloc
 * @b: number of bytes needed to allocate
 *
 * Return: return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *u;

	u = malloc(b);

	if (u == NULL)
		exit(98);

	return (u);
}
