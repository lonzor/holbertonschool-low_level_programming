#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number where we are getting the last digit
 * Return: last digit
 **/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last <= 0)
		last = -1 * last;
	_putchar(last + '0');
	return (last);
}
