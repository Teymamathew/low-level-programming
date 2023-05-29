#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: lowest array
 * @max: higest array
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *pr;
	int j;
	int weight;

	if (min > max)
		return (NULL);

	weight = max - min + 1;

	pr = malloc(sizeof(int) * weight);

	if (pr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pr[j] = min++;

	return (pr);
}
