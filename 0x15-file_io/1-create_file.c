#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * create_file - make a new file
 * @filename: file name
 * @text_content: text to include in file
 * Return: 1 if successful, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		len = 0;
	else
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if ((write(fd, text_content, len)) < 0)
		return (-1);

	close(fd);
	return (1);
}
