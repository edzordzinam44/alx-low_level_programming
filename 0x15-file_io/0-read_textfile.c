#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX STDOUT
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d = -1;
	ssize_t read_leng, write_len; /* Read and write lenght */
	char *buffer; /* Buffer to store the read data */

	if (filename == NULL)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	/* Read data from the file */
	read_leng = read(file_d, buffer, letters);
	close(file_d);

	if (read_leng == -1)
	{
		free(buffer);
		return (0);
	}

	/* Write the read data to the standard output */
	write_len = write(STDOUT_FILENO, buffer, read_leng);
	free(buffer);

	/* Check if write was successful */
	if (write_len != read_leng)
		return (0);

	return (write_len);
}
