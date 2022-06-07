#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number to the stdout
 * @n: the number whose last digit is to be printed
 *
 * Return: The computed last_digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}

	last_digit = n % 10;
	
	_putchar(last_digit + '0');
	return (last_digit);
}
