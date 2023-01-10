#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments supplied to program.
 * @argv: an array of pointer to the arguments.
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
