#include "holberton.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: a NULL term string to write to file
 * Return: 1 on success or -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int f_open;
	int b_count;
	int f_write;

	if (filename == NULL)
		return (-1);
	f_open = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (f_open == -1)
		return (-1);
	if (!text_content)
		return (1);

	b_count = 0;
	while (text_content[b_count])
		b_count++;

	f_write = write(f_open, text_content, b_count);
	if (f_write == -1)
		return (-1);
	close(f_open);
	return (1);
}
