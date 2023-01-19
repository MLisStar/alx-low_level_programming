#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

#define ARGV(X, S) (argv[X][0] == S)
/**
 * main - entry point, calculates using a given operator
 * @argc: number of arguments
 * @argv: the string value of the arguments
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if ((ARGV(2, '/') || ARGV(2, '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(op))(num1, num2);
	printf("%d\n", result);

	return (0);
}
