#include <stdio.h>
/**
 * main - a program that prints the alphabet
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar (i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}
