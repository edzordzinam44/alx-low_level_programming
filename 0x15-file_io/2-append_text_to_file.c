#include "main.h"

/**
 * _strlen - Calculate the lenght of a string
 * @str: Pointer to the string
 *
 * Return: Length of the string
 */
size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}
/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
