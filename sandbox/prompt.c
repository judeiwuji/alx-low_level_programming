#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Prompt
 *
 * Return: Always 0
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&line, &len, stdin);

	printf("%s", line);
}
