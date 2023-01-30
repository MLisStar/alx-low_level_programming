#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the main function is exectued.
 */
void hare(void)
{
	printf("Your're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
