#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a number and states if its
 *	  positive, negative, or zero.
 *
 * Return: Zero (0)
 */

int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", number);
	else if (n < 0)
		printf("%d is negative\n", number);
	else
		printf("%d is zero\n", number);
	return (0);
}
