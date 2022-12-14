#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, fb_sum;
	float total;

	while (1)
	{
		fb_sum = fb1 + fb2;
		if (fb_sum > 4000000)
			break;

		if ((fb_sum % 2) == 0)
			total += fb_sum;

		fb1 = fb2;
		fb2 = fb_sum;
	}
	printf("%.0f\n", total);
}
