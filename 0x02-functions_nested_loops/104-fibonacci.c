#include <stdio.h>

/**
 * main - This program prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	long double i = 1;
	long double j = 2;
	int m = 0;
	long double sum;

	printf("%1.0Lf, %1.0Lf, ", i, j);

	while (m < 96)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%1.0Lf", sum);

		if (m + 1 < 96)
			printf(", ");
		m++;
	}

	printf("\n");

	return (0);
}
