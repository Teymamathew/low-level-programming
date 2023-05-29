#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: parameter count
 * @argv: string argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
