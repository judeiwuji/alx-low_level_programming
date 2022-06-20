#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: The array
 * @size: The array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum, i, j;

	sum = 0;
	j = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + j);
		j += size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	j = 0;
	for (i = 0; i < size; i++)
	{
		j += size - 1;
		sum += *(a + j);
	}
	printf("%d\n", sum);
}
