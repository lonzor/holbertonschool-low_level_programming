#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @seperator: string printed between numberes
 * @n: ints
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_nums;
	unsigned int i;

	va_start(print_nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_nums, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(print_nums);
	printf("\n");
}
