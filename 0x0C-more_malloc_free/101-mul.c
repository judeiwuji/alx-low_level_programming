#include "main.h"
#include <ctype.h>

/**
 * main - a program that multiplies two positive numbers.
 * @argc: The argument count
 * @argv: The arguments
 *
 * Return: 0 on success, 38 otherwise
 */
int main(int argc, char *argv[])
{
	int mul[1024] = {0};
	int i, j, len1, len2, n;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				_puts("Error");
				exit(98);
			}
		}
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			mul[i + j] = (argv[1][i] - '0') * (argv[2][j] - '0');
		}
	}

	if (mul[0] == 0)
		_puts("0");
	else
	{
		for (i = 0; i < (len1 + len2) - 1; i++)
		{
			n = mul[i];
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				if (n % 10 > 0 || (i + 1 == len1 + len2))
					_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((mul[i] % 10) + '0');
			}
		}
		_putchar('\n');
	}

	return (0);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string to be printed to stdout
 *
 * Returns: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
