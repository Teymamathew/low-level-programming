#include "main.h"
/**
 * _memset - finction that fills memory with a constant byte.
 * @s : parametwr that points
 * @b : the value desired
 * @n : parameters that needs to be changed
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
