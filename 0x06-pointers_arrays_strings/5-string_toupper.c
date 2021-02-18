#include "holberton.h"

/**
 * string_toupper - Changes lowercase to uppercase
 * @p: The string that will be modified
 * Return: char
 **/
char *string_toupper(char *p)
{
	int asc_val = 0;

	while (p[asc_val])
	{
		if (p[asc_val] >= 97 && p[asc_val] <= 122)
		{
			p[asc_val] = p[asc_val] - 32;
		}
		asc_val++;
	}
	return (p);
}
