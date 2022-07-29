#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';
	char u = 'A';
	int totalL = l + 26;
	int totalU = u + 26;

	while (l < totalL)
		putchar(l++);

	while (u < totalU)
		putchar(u++);

	putchar('\n');
	return (0);
}
