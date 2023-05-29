#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 * Return: 0 alaways
 */
int **alloc_grid(int width, int height)
{
	int **dim, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		dim[j] = malloc(sizeof(int) * width);

		if (dim[j] == NULL)
		{
			for (; j >= 0; j--)
				free(dim[j]);

			free(dim);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			dim[j][k] = 0;
	}
	return (dim);
}
