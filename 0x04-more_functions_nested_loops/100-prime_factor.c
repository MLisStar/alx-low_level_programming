#include "main.h"
#include <stdio.h>
/**
 * main - prints largest prime number of 612852475143
 * Return: 0
 */
int main(void)
{
	long int i, n, temp;

	n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			temp = n / i;
			n = temp;
			i = 1;
		}
	}
	return (0);
}
