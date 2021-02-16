#include "holberton.h"

/**
 * _puts - prints
 * @str: the string that will be printed
 * Return: void
 **/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}
