#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';
	int len = c + 26;

	while (c < len)
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
