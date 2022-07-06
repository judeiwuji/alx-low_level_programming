#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own
 * main function.
 *
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int n_byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_byte = atoi(argv[1]);

	if (n_byte < 0)
	{
		printf("Error\n");
		return (2);
	}

	return (0);
}
