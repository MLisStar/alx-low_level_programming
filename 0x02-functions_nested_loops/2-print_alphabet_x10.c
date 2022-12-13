#include "main.h"
/**
 * print_alphabet_x10 - print 10 times
 *
 * return void
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while(i <= 9)
	{
		j = 'a';
		while(j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
