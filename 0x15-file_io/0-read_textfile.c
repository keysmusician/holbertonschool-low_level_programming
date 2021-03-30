#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letter which should be read and printed
 * Return: value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_status, write_status;
	char *read_buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	read_buffer = malloc(letters);
	if (!read_buffer)
		return (0);

	read_status = read(file_descriptor, read_buffer, letters);
	if (read_status == -1)
		return (0);

	write_status = write(STDOUT_FILENO, read_buffer, read_status);
	if (write_status == -1)
		return (0);

	close(file_descriptor);
	free(read_buffer);
	return (write_status);
}
