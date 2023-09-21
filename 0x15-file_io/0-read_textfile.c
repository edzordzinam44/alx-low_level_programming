#include "main.h"

/**
 * read_textfile -  reads a text file and prints to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descrip, bytes_read, bytes_written;
	char *buffer;

	/* Check if the filename is valid */
	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	file_descrip = open(filename, O_RDONLY);
	if (file_descrip == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	/* Read from teh file */
	bytes_read = read(file_descrip, buffer, letters);

	/* Check for the read errors */
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	/* Check for the write errors */
	if (bytes_written == -1 || bytes_read != bytes_written)
	{
		free(buffer);
		return (0);
	}
	close(file_descrip);
	free(buffer);
	return (bytes_written);
}
