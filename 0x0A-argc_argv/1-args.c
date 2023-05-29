#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument passed
 * @argv: array of argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
