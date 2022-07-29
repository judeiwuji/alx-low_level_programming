#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

size_t prompt(char **str)
{
	size_t len = 0;
	char *username;

	username = getenv("USER");
	printf("#%s$ ", username);
	getline(str, &len, stdin);
	return (len);
}

/**
 * execCmd - Executes a command
 *
 * @cmd: The command
 * @args: The command arguments
 *
 * Return: 0 on success, 1 otherwise
 */
int execCmd(char *cmd, char **args, char **env)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		return (1);
	}

	if (pid == 0)
	{
		if ((execve(cmd, args, env)) == -1)
		{
			perror("Error");
		}
		exit(0);
	}
	else
	{
		wait(&status);
		return (0);
	}
}

/**
 * main - Simple shell
 *
 * Return: 0
 */
int main(int argc, char **argv, char **env)
{
	char *str;
	char *cmd;
	char *args[] = {NULL, NULL};
	int len;

	argc = argc;
	argv = argv;
	while (1)
	{
		str = NULL;
		prompt(&str);

		if (str != NULL)
		{
			len = strlen(str) - 1;
			printf("%u\n", len);
			if (len > 0)
			{
				/* prune new line character at the end */
				cmd = malloc(sizeof(char) * len);
				if (cmd == NULL)
					continue;
				strncpy(cmd, str, len);
				args[0] = cmd;
				execCmd(cmd, args, env);
			}
		}
	}
	return (0);
}
