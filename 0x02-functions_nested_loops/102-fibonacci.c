#include <stdio.h>

/**
 * main - This program prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int m = 0;
	int sum;

	printf("%d, %d, ", i, j);

	while (m < 50)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%d", sum);
		if(m < 50)
			printf(", ");
		m++;
	}

	printf("\n");

	return (0);
}
