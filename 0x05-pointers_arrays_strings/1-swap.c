#include "main.h"
/**
 * swap_int - swaps the value of two integar
 * @a: integer to swap first
 * @b: integer to swap second
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
