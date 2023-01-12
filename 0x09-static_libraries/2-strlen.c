#include "main.h"
/**
 * _strlen - gets length of a string
 * @s: the string
 * Return: length
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
