#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: nothing
 *
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
