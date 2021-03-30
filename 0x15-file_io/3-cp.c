#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define BUFFERSIZE 1024

/**
 * error_check - checks for and handles failure of I/O functions
 * @status_code: I/O function return value;
 * @error_code: code used to determine which error to print
 */
void error_check(int status_code, int error_code, ...)
{
	va_list file;

	if (status_code != 3 && error_code == 97)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(error_code);
	}

	if (status_code == -1)
	{
		va_start(file, error_code);
		switch (error_code)
		{
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", va_arg(file, char *));
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", va_arg(file, char *));
			break;
		case 100:
			dprintf(2, "Error: Can't close fd %i\n", va_arg(file, int));
			break;
		}
		va_end(file);
		exit(error_code);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: number of command line arguments
 * @av: filenames of source and destination files
 * Return: 0 on sucess; exit codes 97-100 on error (see error_check())
 */
int main(int ac, char **av)
{
	int file_from_sts, file_to_sts, read_sts, close_sts, write_sts;
	char *file_from, *file_to, buffer[BUFFERSIZE];
	unsigned int perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	error_check(ac, 97);

	file_from = av[1];
	file_to = av[2];

	file_from_sts = open(file_from, O_RDONLY);
	error_check(file_from_sts, 98, file_from);

	file_to_sts = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, perms);
	error_check(file_to_sts, 99, file_to);

	for (read_sts = 1; read_sts;)
	{
		read_sts = read(file_from_sts, buffer, BUFFERSIZE);
		error_check(read_sts, 98, file_from);

		write_sts = write(file_to_sts, buffer, read_sts);
		error_check(write_sts, 99, file_to);
	}

	close_sts = close(file_from_sts);
	error_check(close_sts, 100, file_from_sts);

	close_sts = close(file_to_sts);
	error_check(close_sts, 100, file_from_sts);

	return (0);
}
