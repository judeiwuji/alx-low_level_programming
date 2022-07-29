#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase to the stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alpha = 97;
	int max = 97 + 26;

	while (alpha < max)
	{
		_putchar(alpha++);
	}
	_putchar('\n');
}
