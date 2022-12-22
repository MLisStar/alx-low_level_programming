#include "main.h"
/**
 * print_number - print integers
 * @n: number
 * Return: void
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	int d = 0, i;

	if (n < 0)
		num = -n;
	if (n == 0)
		d = 1;

	while (num >= 1)
	{
		num = num / 10;
		d++;
	}

	for (i = 0; i < d; i++)
	{
		int pow = 1;
		int j, k;

		for (j = 0; j < d - i - 1; j++)
		{
			pow = pow * 10;
		}

		k = ((n / pow) % 10);
		if (n < 0)
		{
			k = -k;
			if (i == 0)
				_putchar(45);
		}
		_putchar(48 + k);
	}
}
