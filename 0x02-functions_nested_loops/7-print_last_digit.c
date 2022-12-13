#include "main.h"
/**
 * print_last_digit - entry point
 *
 * gets parameter and prints the last digit of number
 *
 * Returns the value of the last digit
 *
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
		_putchar('0' + n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
	}
	return (n);
}
