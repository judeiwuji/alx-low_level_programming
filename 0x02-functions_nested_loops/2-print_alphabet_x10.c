#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase to stdout
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int alpha;
	int max;

	while (i < 10)
	{
		alpha = 97;
		max = alpha + 26;
		while (alpha < max)
		{
			_putchar(alpha++);
		}
		_putchar('\n');
		i++;
	}
}
