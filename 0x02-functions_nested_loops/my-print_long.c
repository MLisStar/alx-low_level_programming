#include <stdlib.h>
/**
 * main - entry point
 * print_long - function to print
 *
 * @n: parameter
 *
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}

	if (sum != 0)
	{
		print_long(sum / 10);
		_putchar((sum % 10)+ '0');
	}

}

void print_long(long sum)
{
	if(value != 0) 
	{
		print_long(sum / 10);
		_putchar((sum % 10) + '0');
	}

}
