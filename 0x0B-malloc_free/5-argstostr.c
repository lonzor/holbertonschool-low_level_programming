#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concats all args
 * @ac: number of args
 * @av: array with args
 * Return: pointer to args or NULL
 **/
char *argstostr(int ac, char **av)
{
	char *cat_str;
	int s = 0;
	int x, y;
	int z = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s++;
		}
		s++;
	}
	s++;

	cat_str = malloc(s * sizeof(char));

	if (cat_str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			cat_str[z] = av[x][y];
				z++;
		}
	}
	cat_str[z] = '\0';
	return (cat_str);
}
