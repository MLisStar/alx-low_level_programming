#include "main.h"
/**
 * _islower - entry point
 *
 * @parameterc: character to be checked if lowercase
 *
 * Return: Always 1 if c is lowercase or 0 if c is not lowercase
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
