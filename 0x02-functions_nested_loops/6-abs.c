#include "main.h"
/**
 * _abs(int) - computes the absolute value of an integer
 *
 */
int _abs(int n)
{
	int nvalue; 

	if (n > 0 || n ==0)
	{
		return (n);
	}
	else
	{
		nvalue = n * -1;
		return (nvalue);
	}
}
