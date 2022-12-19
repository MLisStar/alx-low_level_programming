#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - entry point. program that generates random valid pass for the program 101-crackme
 * Return: 0
 *
 */
int main(void)
{
	int sum = 0;
	char randchar;

	srand(time(0));

	while (sum <= 2646)
	{
		randchar = rand() % 128;
		write(1, &randchar, 1);
		sum += randchar;
	}

	randchar = 2772 - sum;
	write(1, &randchar, 1);
	return (0);
}
