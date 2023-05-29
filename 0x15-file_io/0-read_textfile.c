#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file
 * @letters: number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t tf;
	ssize_t nl;
	ssize_t r;

	tf = open(filename, O_RDONLY);
	if (tf == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(tf, buff, letters);
	nl  = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(tf);
	return (nl);
}
