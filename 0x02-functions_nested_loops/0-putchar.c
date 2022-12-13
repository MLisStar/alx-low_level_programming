#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(word[i]);
	}

	putchar('\n');
	return (0);
}
