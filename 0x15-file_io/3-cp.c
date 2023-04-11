#include "main.h"

/**
 * error_file - prints error message if file operation fails
 * @file_from: file descriptor for source file
 * @file_to: file descriptor for destination file
 * @file_from_path: path to source file
 * @file_to_path: path to destination file
 *
 * Return: nothing
 */
void error_file(int file_from, int file_to, char *file_from_path, char *file_to_path)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_path);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to_path);
		exit(99);
	}
}

/**
 * main - copies the content of one file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t n_chars_read, n_chars_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv[1], argv[2]);

	while ((n_chars_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		n_chars_written = write(file_to, buffer, n_chars_read);
		if (n_chars_written != n_chars_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (n_chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
