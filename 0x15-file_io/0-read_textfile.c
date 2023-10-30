#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w - actual number of bytes read and printed
 *         0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, bytesRead, bytesWritten;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buf, letters);

	if (bytesRead == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buf, bytesRead);
	free(buf);
	close(fd);

	if (bytesWritten == -1)
		return (0);
	return (bytesWritten);
}
