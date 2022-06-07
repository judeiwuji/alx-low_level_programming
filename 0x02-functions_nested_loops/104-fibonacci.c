#include <stdio.h>

/**
 * main - This program prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	double i = 1;
	double j = 2;
	int m = 0;
	double sum;

	printf("%2.0f, %2.0f, ", i, j);

	while (m < 96)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%2.0f", sum);

		if (m + 1 < 96)
			printf(", ");
		m++;
	}

	printf("\n");

	return (0);
}
