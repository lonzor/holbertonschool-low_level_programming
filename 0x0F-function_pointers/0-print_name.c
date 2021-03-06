#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the name to copy
 * @f: pointer to function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
