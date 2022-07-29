#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, space, hash, i;

	row = 0;

	while (row < size)
	{
		space = size - (row + 1);
		hash = size - space;
		i = 0;

		while (i < space)
		{
			_putchar(' ');
			i++;
		}

		i = 0;
		while (i < hash)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		row++;
	}

	if (size <= 0)
		_putchar('\n');
}
