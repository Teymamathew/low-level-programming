#include "main.h"
/**
 * factorial - funcrion that returns factorial of a given number
 * @n: parameter
 * Return: 1,-1 and factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
