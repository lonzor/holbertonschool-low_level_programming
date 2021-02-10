#include "holberton.h"

/**
 * jack_bauer - prints numbers in time format up to less than 24hrs
 * Return: void
 **/
void jack_bauer(void)
{
	int mins;
	int hrs;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}
