#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j, m;

	i = 0;

	while (i < n)
	{
		j = i;
		m = 0;
		while (m < j)
		{
			_putchar(' ');
			m++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar('\n');
}
