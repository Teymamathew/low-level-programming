#include "main.h"
/**
 * binary_to_uint - function that converts a binary
 * binary number to an unsigned int.
 * @b: parameter pointing to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int vert = 0;
	int j;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		vert = 2 * vert + (b[j] - '0');
	}
	return (vert);
}
