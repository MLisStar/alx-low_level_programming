#include "main.h"
/**
 * print_square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
