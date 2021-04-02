#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/stat.h>
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

	if (status_code == -1)
	{
		va_start(file, error_code);
		switch (error_code)
		{
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", va_arg(file, char *));
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", va_arg(file, char *));
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", va_arg(file, int));
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
	int file_from_sts, file_to_sts, read_sts, write_sts;
	char buffer[BUFFERSIZE];
	unsigned int perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((file_from_sts = open(av[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if ((file_to_sts = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perms)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((read_sts = read(file_from_sts, buffer, BUFFERSIZE)))
	{
		error_check(read_sts, 98, av[1]);
		write_sts = write(file_to_sts, buffer, read_sts);
		error_check(write_sts, 99, av[2]);
	}
	if (close(file_from_sts) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_sts);
		exit(100);
	}
	if (close(file_to_sts) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_sts);
		exit(100);
	}
	return (0);
}
