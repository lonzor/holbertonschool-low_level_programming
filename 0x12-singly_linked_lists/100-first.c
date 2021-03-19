#include <stdio.h>

void __attribute__((constructor)) silly_rabbit(void);
/**
 * silly_rabbit - prints a string before the main has executed
 **/
void silly_rabbit(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
