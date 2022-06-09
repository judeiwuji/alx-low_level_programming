#include <stdio.h>
#include "main.h"

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: void
 */

int main(void)
{
	long n = 612852475143;
	int i, largest;

	while (i < n / 2)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
				largest = i;
		}
		printf("at -> %d", i);
		i++;
	}

	printf("%d\n", largest);
	return (0);
}

/**
 * is_prime - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 when n is a prime number, 0 otherwise
 */

int is_prime(int n)
{
	int i = 0;

	if (n < 1)
		return (0);

	while (i < n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
