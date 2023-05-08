#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	n_read = read(fd, buf, letters);
	if (n_read == -1)
		return (0);
	n_written = write(STDOUT_FILENO, buf, n_read);
	if (n_written == -1)
		return (0);
	free(buf);
	close(fd);
	return (n_written);
}