#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append to
 * @text_content: content to append
 * Return: 1 on sucess; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr_sts;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		wr_sts = write(fd, text_content, len);
		if (wr_sts == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
