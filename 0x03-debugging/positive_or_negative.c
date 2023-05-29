#include "main.h"
/**
 * positive_or_negative - function that prints positive or negative output
 * @i : parameter given
 * Return: 0 alaways
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
