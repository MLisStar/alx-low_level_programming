#include "main.h"
/**
 * _pow_recursion - returns value of x to power of y
 * @x: value maintained
 * @y: manipulator
 * Return: sum as Int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
