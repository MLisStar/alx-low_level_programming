#include "main.h"
/**
 * print_rev - print string in reverse
 * @str: string
 * Return: nothing
 *
 */
void print_rev(char *str)
{
	int len = 0, i;

	while (str[i++])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
