#include "main.h"

/**
 * create_file - Function to create a file.
 * @filename: Name of the file to be created
 * @text_content: The NULL terminated string to write to the file
 * Return: 1 when successful, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_write;
	int length;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;

		for (; text_content[length] != '\0'; length++)
			;

		byte_write = write(fd, text_content, length);

		if (byte_write == -1)
		{
			write(STDOUT_FILENO, "fails", 6);
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
