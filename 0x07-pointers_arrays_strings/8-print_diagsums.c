#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints two diagonal set of matrix
 * @a: integar
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumb;
	int sumc;

	sumb = 0;
	sumc = 0;

	for (i = 0; i < size; i++)
	{
		sumb += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sumc += a[i];
		a -= size;
	}
	printf("%d, %d\n", sumb, sumc);
}
