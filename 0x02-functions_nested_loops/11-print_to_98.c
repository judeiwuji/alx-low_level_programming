#include <stdio.h>

/**
 * print_to_98 - This function prints all natural numbers from n to 98
 * @n: The number to start printing from
 */
void print_to_98(int n)
{
	int sum  = n;
	int sign = 1;

	if (n > 98)
		sign = -1;

	while (sum != 98)
	{
		printf("%d, ", sum);
		sum += sign;
	}
	printf("%d\n", 98);
}
