#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: parameter
 * @argv: string to be renamed
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
