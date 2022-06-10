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
	long divisor, largest;

	divisor = 2;

	while (n != 0)
	{
		if (n % divisor != 0)
		{
			++divisor;
		}
		else
		{
			largest = n;
			n = n / divisor;

			if (n == 1)
				break;
		}
	}

	printf("%ld\n", largest);
	return (0);
}

