#include "main.h"
#include <stdlib.h>
/**
 * function that prints the alphabet, in lowercase, followed by a new line.
 * return: always 0
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
