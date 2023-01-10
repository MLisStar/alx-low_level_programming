#include "main.h"
#include <stdlib.h>
/** 
 * _strdup - func to copy a str on a new alloc memory
 * @srt: str to copy
 * Return: a pointer to the copied str.
 */
char *_strdup(char *str)
{
	char *pointer;
	int i;
	int count = 0;
/* if given str in NULL */
	if (str == NULL)
		return (NULL);

/* find length of given str */
	while (*(str + count))

		count++;
/* allocate the dynamic memory area */
	pointer = malloc(sizeof(char) * (count + 1));

/* verify if pointer is pointer on alloc memory is ! NULL */
	if (pointer == NULL)
		return (NULL);

/* initialize i */
	i = 0;
/* filling the alloc area with the bytes from given str */
	while (i <= count)
	{
		*(pointer + i) = *(str + 1);
		i++;
	}
/* return a pointer to the str */
	return (pointer);
}
