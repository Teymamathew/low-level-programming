#include <stdio.h>
/**
 * main - print in reverse
 *
 * Return: 0 alaways (sucess)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar ('\n');
	return (0);
}
