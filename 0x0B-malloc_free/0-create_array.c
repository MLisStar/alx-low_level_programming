#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a dynamic memory allocation.
 * @size: size of array
 * @c: char
 * Return: pointer to array or NULL is fail
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	pointer = malloc(sizeof(char) * size);

/*
 * Allocate a specific no. of bytes on the memory
 * return a pointer to the alloc memory
 */
	if (pointer == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			pointer[i] = c;
		return (pointer);
	}
}
