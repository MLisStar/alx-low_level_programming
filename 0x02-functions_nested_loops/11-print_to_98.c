#include "main.h"
#include <stdlib.h>
/**
 * print_to_98() - entry point
 *
 * prints all natural numbers from n to 98, followed by a new line.
 *
 * Return nothing
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			if (i != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else
	{
		for(i = n; i >= 98; i--)
		{
			_putchar('0' + i);
			if (i != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
}
