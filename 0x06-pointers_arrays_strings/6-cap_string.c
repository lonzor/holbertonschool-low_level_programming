#include "holberton.h"

/**
 * cap_string - capitalizes each word
 * @s: string
 * Return: pointer to the string
 **/
char *cap_string(char *s)
{
	int i;
	int char_index;

	char char_array[13] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;
		for (char_index = 0; char_index < 13; char_index++)
		{
			if (s[i] == char_array[char_index])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
}
