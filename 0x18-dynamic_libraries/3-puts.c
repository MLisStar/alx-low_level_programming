#include "main.h"
/**
 * _puts - print string
 * @str: the string
 * Return: nothing
 *
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
