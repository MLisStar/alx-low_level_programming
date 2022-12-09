#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define STRING "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main entry
 * Return 1
 */
int main(void)
{
	int str = strlen(STRING);
	write(1, STRING, str);
	return (1);
}
