#include "holberton.h"

/**
 * rot13 - encodes a string using rot13 cypher
 * @s: string
 * Return: pointer
 **/
char *rot13(char *s)
{
	int i;
	int k;

	char norm[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z'};

	char rot[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
			'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
			'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			'J', 'K', 'L', 'M'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k <= 51; k++)
		{
			if (s[i] == norm[k])
			{
				s[i] = rot[k];
				break;
			}
		}
	}
	return (s);
}
