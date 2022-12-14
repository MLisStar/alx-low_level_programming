#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int temp;

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			n--;
		}
	}
}
