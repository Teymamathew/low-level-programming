#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: parameter count
 * @argv: string argument
 * Return: 0 alaways when successful
 */
int main(int argc, char *argv[])
{
	int j, sum, count;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	count = atoi(argv[1]);
	sum = 0;

	if (count < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && count >= 0; j++)
	{
		while (count >= cent[j])
		{
			sum++;
			count -= cent[j];
		}
	}
	printf("%d\n", sum);
	return (0);
}
