#include "holberton.h"

/**
 * helper_prime - helper function for is_prime_number
 * @n: The number being check for primeness
 * @f: Possible factor of n
 * Return: 1 if prime and 0 if it isn't.
 **/
int helper_prime(int f, int n)
{
	if (n < 2)
		return (0);
	if (n % f == 0)
		return (0);
	if (n > n / 2)
		return (1);
	return (helper_prime(f + 1, n));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number we are checking for primeness
 * Return: return 1 if prime, and 0 if not
 **/
int is_prime_number(int n)
{
	return (helper_prime(2, n));
}
