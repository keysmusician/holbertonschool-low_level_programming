#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content of new file
 * Return: 1 on sucess; -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr_sts;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
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
