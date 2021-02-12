#include "holberton.h"

/**
 * print_numbers - prints digits
 * Return: void
 **/
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
