#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * is_digit - checks for digit
 * @s: string to be evaluated
 * Return: 0 if a non-digit if found, 1 otherwise
 *
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);

		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * error - handles errors
 */
void error(void)
{
	printf("error");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 *
 */int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, num1, num2, *prod, a = 0;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len + len2 + 1;
	prod = malloc(sizeof(int) * len);

	if (!prod)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		prod[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += prod[len1 + len2 + 1] + (num1 * num2);
			prod[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			prod[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (prod[i])
			a = 1;
		if (a)
			_putchar(prod[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(prod);
	return (0);
}