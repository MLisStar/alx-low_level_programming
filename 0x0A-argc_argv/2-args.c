#include <stdio.h>
/**
 * main - prints all arguments it reveives
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
