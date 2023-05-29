#include "main.h"
#include <stdlib.h>
/**
 * _memset - program that fills memory with a constant byte
 * @r: first memory area to be filled
 * @c: char
 * @m: number of times to copy char
 * Return: 0 always.
 */
char *_memset(char *r, char c, unsigned int m)
{
	unsigned int j;

	for (j = 0; j < m; j++)
	{
		r[j] = c;
	}
	return (r);
}

/**
 * _calloc - function that allocates memory
 * for an array, using malloc
 * @nmemb: point of allocation
 * @size: element
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pr = malloc(size * nmemb);

	if (pr == NULL)
		return (NULL);
	_memset(pr, 0, nmemb * size);
	return (pr);
}
