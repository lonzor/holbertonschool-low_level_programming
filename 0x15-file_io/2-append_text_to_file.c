#include "holberton.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: file name
 * @text_content: is the NULL terminated string to add at end of file
 * Return: 1 if success or -1 if failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open;
	int counter;
	int f_write;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	f_open = open(filename, O_RDWR | O_APPEND);
	if (f_open == -1)
		return (-1);

	counter = 0;
	while (text_content[counter])
		counter++;
	f_write = write(f_open, text_content, counter);
	if (f_write == -1)
		return (-1);

	close(f_open);
	return (1);
}
