#include "main.h"
/**
 * *_strcpy - copies the string pointed by src including the terminating null byte (\0)
 * @dest: pointer to the buffer
 * @src: strnig
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
