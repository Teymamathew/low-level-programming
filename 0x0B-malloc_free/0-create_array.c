#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of char
 * @c: character
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = c;

	return (s);
}
