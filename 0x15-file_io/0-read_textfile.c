#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads and write content of filename to stdout
 * @filename: file to read
 * @letters: number of characters to read
 * Return: Number of characters read and written, -1 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string_buffer;
	int count = 0;
	int write_count = 0;
	int fd = open(filename, O_RDONLY | O_EXCL);

	string_buffer = malloc(sizeof(char) * letters);
	if (string_buffer == NULL)
		return (0);

	if (fd == -1 || filename == NULL)
		return (0);

	count = read(fd, string_buffer, letters);
	if (count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, string_buffer, count);

	if (write_count != count || write_count == -1)
		return (0);

	close(fd);
	return (write_count);
}
