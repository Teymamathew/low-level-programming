#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file -  function that appends text
 * at the end of a file.
 * @filename: name ofthe file
 * @text_content: is the NULL terminated string to
 * add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, m, wen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (wen = 0; text_content[wen];)
			wen++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	m = write(p, text_content, wen);

	if (p == -1 || m == -1)
		return (-1);

	close(p);

	return (1);
}
