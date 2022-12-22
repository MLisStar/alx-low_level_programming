#include "main.h"
/**
 * rot13 - encodes using rot13
 * @s: string
 * Return: s
 *
 */
char *rot13(char *s)
{
	char first[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char next[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (c == first[j])
			{
				s[i] = first[j];
			}
		}
		i++;
	}
	return (s);
}
