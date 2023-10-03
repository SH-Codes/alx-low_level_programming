#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates memory for a buffer to store file content.
 * @file: The filename, used for error messages.
 * Return: A pointer to the allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes a file and checks for closing errors.
 * @fd: The file descriptor of the file to close.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_file_errors - Checks for file operation errors and prints message.
 * @fd: The file descriptor or the operation result.
 * @file: The filename, used for error messages.
 * @flag: Indicator for the type of operation (0 for read, 1 for write).
 */

void check_file_errors(int fd, char *file, int flag)
{
	if (fd == -1)
	{
		if (flag == 0)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		else if (flag == 1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(flag == 0 ? 98 : 99);
	}
}

/**
 * main - Main function to copy content from one file to another.
 * @argc: Argument count.
 * @argv: Argument vector containing file names.
 * Return: 0 on success, error code otherwise.
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	check_file_errors(from_fd, argv[1], 0);

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_file_errors(to_fd, argv[2], 1);

	do {
		read_count = read(from_fd, buffer, 1024);
		check_file_errors(read_count, argv[1], 0);

		write_count = write(to_fd, buffer, read_count);
		check_file_errors(write_count, argv[2], 1);

	} while (read_count > 0);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);

	return (0);
}
