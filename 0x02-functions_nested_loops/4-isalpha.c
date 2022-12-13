#include "main.h"
/**
 * _isalpha - checks if c is an alphabetic character
 *
 * return 1 is c letter or 0 if c is not
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
