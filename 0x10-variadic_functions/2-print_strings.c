#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: num of strings passed to the function
 * Return: nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_str;
	char *str;
	unsigned int i;

	va_start(print_str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print_str, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
