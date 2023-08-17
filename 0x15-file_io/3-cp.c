#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_read_error - error message when reading filename fails
 * @filename: file being read
 */
void print_read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * print_write_error - error message when writing to filename fails
 * @filename: file being written to
 */
void print_write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * print_close_error - error message when closing a file descriptor fails
 * @fd: fd to file being closed
 */
void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - copies the contents of one file to another
 * @ac: number of arguments passed to main - should be three
 * (program name inclusive)
 * @files: files to copy from and to, respectively
 * Return: 98 on reading error, 99 on writing error,
 * 100 on closing error, 0 otherwise
 */

int main(int ac, char **files)
{
	int file_from, file_to, write_return, read_return;
	char *read_buffer;

	file_to = file_from = write_return = 0;
	read_return = 1024;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(files[1], O_RDONLY);
	file_to = creat(files[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	read_buffer = malloc(sizeof(char) * 1024);

	if (file_from < 0 || read_buffer == NULL)
		print_read_error(files[1]);

	if (file_to < 0)
		print_write_error(files[2]);

	while (read_return == 1024)
	{
		read_return = read(file_from, read_buffer, 1024);
		if (read_return < 0)
			print_read_error(files[1]);
		write_return = write(file_to, read_buffer, read_return);
		if (write_return < 0)
			print_write_error(files[2]);
	}

	if ((close(file_to)) < 0)
		print_close_error(file_to);
	if ((close(file_from)) < 0)
		print_close_error(file_from);
	exit(0);
}
