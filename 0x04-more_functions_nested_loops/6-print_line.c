#include "holberton.h"

/**
 * print_line - prints an underscore
 * @n: number of times an understcore should be printed
 * Return: void
 **/
voi print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
