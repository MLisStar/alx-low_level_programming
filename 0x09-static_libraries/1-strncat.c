#include "main.h"
/**
 * *_strncat - concatinate two strings
 * @dest: string
 * @src: second string
 * @n: limit
 * Return: pointer to the resulting string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + j) != 0)
	{
		*(dest + i + j) = *(src + j);
		if (j >= n)
			break;

		j++;
	}
	*(dest + i + j) = 0;
	return (dest);
}
