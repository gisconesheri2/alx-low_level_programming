#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * append_text_to_file - add text to end of file
 * @filename: file name to append text to
 * @text_content: text to add to file
 * Return: -1 if unsuccessful, 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len] != '\0')
	{
		len++;
	}

	if ((write(fd, text_content, len)) < 0)
		return (-1);

	close(fd);
	return (1);
}
