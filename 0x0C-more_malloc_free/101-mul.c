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
	int mul, i, j;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
