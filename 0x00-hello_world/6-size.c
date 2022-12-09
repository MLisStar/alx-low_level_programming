#include <stdio.h>
/**
 * main - print sizes
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
