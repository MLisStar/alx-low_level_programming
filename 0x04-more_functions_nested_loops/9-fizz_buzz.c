#include "main.h"
#include <stdio.h>
/**
 * main - FizzBuzz
 *
 * Description: prints 1-100 but Fizz for multiples of 3, buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
