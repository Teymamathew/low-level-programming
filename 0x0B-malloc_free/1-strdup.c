#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string character
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *r;
	int j, k = 0;

	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
		k++;

	r = malloc(sizeof(char) * (k + 1));

	if (r == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
		r[j] = str[j];

	return (r);
}
