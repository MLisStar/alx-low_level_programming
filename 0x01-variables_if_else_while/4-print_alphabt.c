#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != 'q' && lowerCase != 'e')
		{
			putchar(lowerCase);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
