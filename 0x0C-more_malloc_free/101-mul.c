#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * _number - program that checks for non digits
 *  @str: string
 *  Return: 0 always
 */
int _number(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * errors - errors handler for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main -  a program that multiplies two positive number
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int w1, w2, w, k, num1, num2, count, *mul, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_number(s1) || !_number(s2))
		errors();
	w1 = _strlen(s1);
	w2 = _strlen(s2);
	w = w1 + w2 + 1;
	mul = malloc(sizeof(int) * w);
	if (!mul)
		return (1);
	for (k = 0; k <= w1 + w2; k++)
		mul[k] = 0;
	for (w1 = w1 - 1; w1 >= 0; w1--)
	{
		num1 = s1[w1] - '0';
		count = 0;
		for (w2 = _strlen(s2) - 1; w2 >= 0; w2--)
		{
			num2 = s2[w2] - '0';
			count += mul[w1 + w2 + 1] + (num1 * num2);
			mul[w1 + w2 + 1] = count % 10;
			count /= 10;
		}
		if (count > 0)
			mul[w1 + w2 + 1] += count;
	}
	for (k = 0; k < w - 1; k++)
	{
		if (mul[k])
			a = 1;
		if (a)
			_putchar(mul[k] + '0');
	}
	_putchar('\n');
	return (0);
}
/**
 * _helperfunction - help main
 *
 * @a: parameter
 * Return: 0 always
 */
int _helperfunction(int a)
{
	int *mul = 0;

	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
