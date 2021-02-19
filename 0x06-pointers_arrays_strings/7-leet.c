#include "holberton.h"

/**
 * leet - translates string to leet
 * @s: string
 * Return: pointer to string
 **/
char *leet(char *s)
{
	int i;
	int k;

	char norm[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k <= 10; k++)
		{
			if (s[i] == norm[k])
				s[i] = leet[k];
		}
	}
	return (s);
}
