#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search for integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: integer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
