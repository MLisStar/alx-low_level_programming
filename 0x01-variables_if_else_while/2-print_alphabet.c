#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - entry point
 *
 * return: Always 0 (Success)
 *
 */
int main(void)
{
	char lowerCase;

	for(lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');

	return (0);
}
