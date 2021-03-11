#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all given params
 * @n: number of params from input
 * Return: total sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	unsigned int sums = 0;

	va_start(nums, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sums = sums + va_arg(nums, int);
	va_end(nums);
	return (sums);
}
