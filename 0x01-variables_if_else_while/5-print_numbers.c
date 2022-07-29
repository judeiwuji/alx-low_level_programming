#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';
	int len = c + 10;

	while (c < len)
		putchar(c++);
	putchar('\n');
	return (0);
}
