#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 * @n: parameter
 *
 * Return: absolute value of the number
 *
 */
int _abs(int n)
{
	int nvalue;

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		nvalue = n * -1;
		return (nvalue);
	}
}
