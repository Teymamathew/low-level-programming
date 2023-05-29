#include "main.h"
#include <stdlib.h>
/**
 * create_file - function that creates a file.
 * @filename: file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int tf, m, wen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (wen = 0; text_content[wen];)
			wen++;
	}

	tf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	m = write(tf, text_content, wen);

	if (tf == -1 || m == -1)
		return (-1);

	close(tf);

	return (1);
}
