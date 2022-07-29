#include <stdio.h>
#include <unistd.h>

/**
 * main - Exec example
 *
 * Return: Always 0
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		printf("Error:");
	}

	printf("After execve\n");
	return (0);
}
