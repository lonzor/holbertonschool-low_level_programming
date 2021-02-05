#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of random number
 *	it also states if it is less than 5
 *	less than 6, or if it is 0
 *
 * Return: Zero(0)
 **/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if ((n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	else
		printf("Last digit of %d is %d and is 0\n", n, l);
	return (0);
}
