#include "main.h"
int final_prime(int n, int j);
/**
 * is_prime_number - function that returns 1 if the inout is a prime number
 * @n: number
 * Return: 0 always
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (final_prime(n, n - 1));
}
/**
 * final_prime - function thay prints prime number
 * @n: number
 * @j: added number
 * Return: 0 always
 */
int final_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	else if (n % j == 0 && j > 0)
		return (0);
	return (final_prime(n, j - 1));
}
