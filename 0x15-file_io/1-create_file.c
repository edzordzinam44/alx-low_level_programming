#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	/* Write the text content to the file */
	bytes_written = write(fd, text_content, text_len);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	/* Close the file and return succes */
	close(fd);
	return (1);
}
