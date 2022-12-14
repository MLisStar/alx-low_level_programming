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
		for (i = 0; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			printf("%d", i;
		}
	}
	else
	{
		for (i = 0; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			printf("%d");
		}
	}
}
