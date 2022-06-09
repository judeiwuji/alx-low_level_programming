#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int digit;
	int divisor;
	int base = 10;
	int start = 0;
	int isNegative;

	if (n < 0)
	{
		isNegative = 1;
		n = n * -1;
	}

	while (base >= 0)
	{
		divisor = to_power(10, base);
		digit = ((n / divisor) % 10);

		if (start == 0 && digit == 0)
		{
			base--;
		}
		else if (start == 0 && digit != 0)
		{
			base--;
			start = 1;

			if (isNegative == 1)
				_putchar('-');
			_putchar(digit + '0');
		}
		else
		{
			_putchar('0' + digit);
			base--;
		}
	}

	if (divisor == 1 && digit == 0)
		_putchar(48);
}

/**
 * to_power - Computes the exponential of a number
 * @n: The number
 * @base: The power that n is raised to
 *
 * Return: The computed power
 */

int to_power(int n, int base)
{
	int i = 0;
	int exp = 1;

	while (i < base)
	{
		exp *= n;
		i++;
	}
	return (exp);
}
