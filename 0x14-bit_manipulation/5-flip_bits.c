#include "main.h"
/**
 * flip_bits - finction that returns the
 * number of bits to flip
 * @n: number of bits
 * @m: parameter
 * Return: value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, k = 0;
	unsigned long int nw;
	unsigned long int a = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		nw = a >> j;
		if (nw & 1)
			k++;
	}
	return (k);
}
