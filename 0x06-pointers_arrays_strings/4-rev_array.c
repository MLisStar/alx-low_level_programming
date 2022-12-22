#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int temp1 = a[i];

		int temp2 = a[n - 1];

		a[i] = temp2;
		a[n - 1] = temp1;
		i++;
		n--;
	}
}
