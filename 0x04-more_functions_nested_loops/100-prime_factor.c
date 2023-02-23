#include <stdio.h>

/**
 * main - Entry point
 * Description: Prime Numbers
 * Return: 0
 */

int main(void)
{
	long num, factor, i;

	num = 612852475143;
	factor = 1;
	for (i = 2; i <= num / i; i++)
	{
		while (num % i == 0)
		{
			factor = i;
			num /= i;
		}
	}
	if (num > 1)
	{
		factor = num;
	}
	printf("%ld\n", factor);
	return (0);
}
