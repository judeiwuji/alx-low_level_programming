#include <stdio.h>
#include <string.h>

/**
 * main - splits a tring into words
 *
 * Return: 0
 */
int main(void)
{
	char *buffer;
	char *token;
	size_t len = 0;

	printf("$ ");
	getline(&buffer, &len, stdin);

	token = strtok(buffer, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
