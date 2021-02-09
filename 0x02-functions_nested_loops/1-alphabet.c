#include "holberton.h"
/**
 * print_alphabet - prints alphabet withtout printf
 *
 * Return: Void
 **/
void print_alphabet(void);
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter++)
	}
	_putchar('\n');
}
