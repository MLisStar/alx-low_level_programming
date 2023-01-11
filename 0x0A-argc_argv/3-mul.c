#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints manipulation of 2 nums, then new line
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: if the program receives two arguments - 0 otherwise - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
