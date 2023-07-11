#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid – the nested loop to make grid
 * @width: width inputs
 * @height: height inputs
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **u;
	int v, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	u = malloc(sizeof(int *) * height);

	if (u == NULL)
		return (NULL);

	for (v = 0; v < height; v++)
	{
		u[v] = malloc(sizeof(int) * width);

		if (u[v] == NULL)
		{
			for (; v >= 0; v--)
				free(u[v]);

			free(u);
			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
	{
		for (w = 0; w < width; w++)
			u[v][w] = 0;
	}

	return (u);
}
