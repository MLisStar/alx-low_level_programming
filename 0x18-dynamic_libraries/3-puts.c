#include "main.h"
#include <stdio.h>

void _puts(char *str);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
