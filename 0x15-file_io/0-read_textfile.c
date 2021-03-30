#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to the POSIX
 * @filename: the file being read
 * @letters: number of letters to be read or print
 * Return: the amount of letters read or 0 if error
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int f_open;
	int f_read;
	int f_write;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL || filename == NULL)
		return (0);

	f_open = open(filename, O_RDONLY, 0);
	if (f_open == -1)
	{
		free(buff);
		return (0);
	}

	f_read = read(f_open, buff, letters);
	if (f_read == -1)
	{
		free(buff);
		return (0);
	}	

	f_write = write(STDOUT_FILENO, buff, f_read);
	if (f_read != f_write)
		return (0);

	free(buff);
	close(f_open);
	return (f_read);
}
