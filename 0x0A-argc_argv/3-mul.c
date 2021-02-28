#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arg count
 * @argv: arg array
 * Return: the the result, or Error
 **/
int main(int argc, char *argv[])
{
	int mult_result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n")
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult_result = num1 * num2;
	printf("%d\n", mult_result);
	return (0);
}
