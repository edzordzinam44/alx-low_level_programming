#include "main.h"

/**
 * _error - Error handler function.
 * @error_code: Error code
 * @filename: File name
 */
void _error(int error_code, char *filename)
{
	if (error_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (error_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * cp - Copies the content of one file to another.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 * Return: 1 on success, -1 on failure.
 */
void cp(char *file_from, char *file_to)
{
	int fd_src, fd_dest, bytes_read, bytes_written;
	char buffer[1024];

	/* Open source file for reading */
	fd_src = open(file_from, O_RDONLY);
	if (fd_src < 0)
		_error(98, file_from);

	/* Open destination file for writing */
	fd_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest < 0)
	{
		close(fd_src);
		_error(99, file_to);
	}

	do {
		/* Read from source file */
		bytes_read = read(fd_src, buffer, 1024);
		if (bytes_read < 0)
			_error(98, file_from);

		/* Write to destination file */
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written < bytes_read)
			_error(99, file_to);
	} while (bytes_written == 1024);

	if (close(fd_src) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		close(fd_dest);
		exit(100);
	}
	if (close(fd_dest) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 on success, -1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
