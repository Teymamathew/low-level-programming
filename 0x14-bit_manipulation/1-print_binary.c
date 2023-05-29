#include "main.h"
/**
 * print_binary - function that prints the binary
 * representation of a number.
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int nw;
	int j, k = 0;

	for (j = 63; j >= 0; j--)
	{
		nw = n >> j;

		if (nw & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
