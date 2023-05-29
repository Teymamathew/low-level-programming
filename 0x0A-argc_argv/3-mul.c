#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, a, m, len, r, digit;

	j = 0;
	a = 0;
	m = 0;
	len = 0;
	r = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && r == 0)
	{
		if (s[j] == '-')
			++a;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (a % 2)
				digit = -digit;
			m = m * 10 + digit;
			r = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			r = 0;
		}
		j++;
	}

	if (r == 0)
		return (0);

	return (m);
}






/**
 * main -  program that multiplies two numbers.
 * @argc: count argument
 * @argv: string argument
 * _atoi: convert a string to integer
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
