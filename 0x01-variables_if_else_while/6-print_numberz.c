#include <stdio.h>
/**
 * main - print one digit
 *
 * Return: 0 alaways (sucess)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar ('\n');
	return (0);
}

