#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: string that will be printed
 * Return: void
 **/
void puts2(char *str)
{
	int i;
	char c;

	while (str[i])
	{
		c = str[i];
		_putchar(c);
		i = i + 2;
	}
	_putchar('\n');
}
