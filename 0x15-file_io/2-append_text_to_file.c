#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	w = write(fd, text_content, i);
	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}

