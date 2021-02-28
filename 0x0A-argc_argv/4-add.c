#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: arg count
 * @argv: arg array
 * Return: 1 if error, 0 if not a number,  or the sum
 **/
int main(int argc, char *argv[])
{
	int i, num, sum;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (argv[i][0] != '0' && num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
