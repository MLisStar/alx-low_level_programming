#include "3-calc.h"
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 *
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}
/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: result
 *
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}
/**
 * op_mul - runs a multiplication calculation on a and b;
 * @a: int value.
 * @b: int value.
 * Return: Resault of math operation.
 */
int op_mul(int a, int b)
{
		return (a * b);
}
/**
 * op_div - runs a division calculation on a and b;
 * @a: int value.
 * @b: int value.
 * Return: Resault of math operation.
 */
int op_div(int a, int b)
{
		return (a / b);
}
/**
 * op_mod - runs a moldules calculation on a and b;
 * @a: int value.
 * @b: int value.
 * Return: Resault of math operation.
 */
int op_mod(int a, int b)
{
		return (a % b);
}
