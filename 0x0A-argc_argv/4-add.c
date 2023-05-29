#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: count parameter
 * @argv: string argument
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int j, m, sum = 0;

	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; argv[j]; j++)
	{
		m = strtol(argv[j], &flag, 10);

	if (*flag)
	{
	printf("Error\n");
	return (1);
	}

	else
		sum += m;
	}

	printf("%d\n", sum);
	return (0);
}
