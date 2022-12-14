#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fb1_num1, fb1_num2, fb2_num1, fb2_num2;
	unsigned long num1, num2;

	for (count = 0 count < 92; count++)
	{
		sum = fb1 + fb2;
		printf("%lu, " sum);

		fb1 = fb2;
		fb2 = sum;
	}

	fb1_num1 = fb1 / 10000000000;
	fb2_num1 = fb2 / 10000000000;
	fb1_num2 = fb1 % 10000000000;
	fb2_num2 = fb2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		num1 = fb1_num1 + fb2_num1;
		num2 = fb1_num2 + fb2_num2;
		if (fb1_num2 + fb2_num2 > 9999999999)
		{
			num1 += 1;
			num2 %= 10000000000;
		}

		printf("%lu%lu", num1, num2);
		if (count != 98)
			printf(", ");

		fb1_num1 = fb2_num1;
		fb1_num2 = fb2_num2;
		fb2_num1 = num1;
		fb2_num2 = num2;
	}
	printf("\n");
	return (0);
}
