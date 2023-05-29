#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Aleays 0.
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
