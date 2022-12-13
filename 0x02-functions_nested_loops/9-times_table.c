#include "main.h"
#include <stdlib.h>
/**
 * times_table() - entry point
 *
 * prints the 9 times table, starting with 0
 *
 * Return void
 *
 */
void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = j * i;

			if (j !=0)
			{
				_putchar(44);
				if (prod >= 0 && prod <= 9)
				{
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(32);
				}
			}
			if(prod >= 10)
			{
				d0 = prod / 10;
				d1 = prod % 10;
				_putchar('0' + d0);
				_putchar('0' + d1);
			}
			else
			{
				_putchar('0' + prod);
			}
		}
		_putchar('\n');
	}
}
