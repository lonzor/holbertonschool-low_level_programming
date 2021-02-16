#include "holberton.h"

/**
 * rev_string - returns a string reversed
 * @s: the string being used
 * Return: void
 **/
void rev_string(char *s)
{
	int rCount = 0;
	int fCount = 0;
	char temp;

	while (s[rCount] != '\0')
	{
		rCount++;
	}
	rCount--;
	while (rCount > fCount)
	{
		temp = s[fCount];
		s[rCount] = s[rCount];
		s[rCount] = temp;
		rCount--;
		fCount++;
	}

}
