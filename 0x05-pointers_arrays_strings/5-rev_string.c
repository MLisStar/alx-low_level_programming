#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: nothing
 *
 */
void rev_string(char *s)
{
	char temp;
	int i, l, len;

	l = 0;
	len = 0;

	while (s[l] != '\0')
		l++;

	len = l - 1;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
