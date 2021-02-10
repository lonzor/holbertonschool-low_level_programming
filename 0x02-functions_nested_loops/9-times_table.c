#include "holberton.h"

/**
 * times_table - prints the grid of times table
 * Return: void
 **/
void times_table(void)
{
	int xAxis, yAxis, result;

	for (yAxis = 0; yAxis < 10; yAxis++)
	{
		for (xAxis = 0; xAxis < 10; xAxis++)
		{
			result = yAxis * xAxis;
			
			if (xAxis != 0)
			{
				_putchar(',');
				_putchar('0');
				if (result  < 10)
					_putchar(' ');
			}
			if (result< 10)
				_putchar(result + '0');
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
