#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of the file to append to
 * @text_content: text to append to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	written_bytes = write(fd, text_content, len);
	
	if (fd == -1 || written_bytes == -1)
		return (-1);

	close(o);
	return (1);
}
