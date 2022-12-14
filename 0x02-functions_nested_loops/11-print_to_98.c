#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - print integers to 98 from passed parameter
 * @n: parameter passed
 *
 * prints all natural numbers from n to 98, followed by a new line.
 *
 * Return: nothing
 *
 */
void print_to_98(int n)
{
	int i;
	int d0, d1;


	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i >= 10)
			{
				d0 = i / 10;
				d1 = i % 10;
				_putchar('0' + d0);
				_putchar('0' + d1);
			}
			else if (i < 0)
			{

			}
			else (i >=0 && i <10)
			{
				_putchar('0' + i);
			}
			if (i != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(32);
			}
		}
	}
	else
	{
		for(i = n; i >= 98; i--)
		{
			d0 = i / 10;
			if (d0 >= 10)
			{
				int d2;
				d2 = d0 / 10;
				_putchar('0' + d2);
				d1 = d0 % 10;
				_putchar('0' + d1);
				d0 = i % 10;
				_putchar('0' + d0);
			}
			else
			{
				d1 = i % 10;
				_putchar('0' + d0);
				_putchar('0' + d1);
			}

			if (i != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
}
