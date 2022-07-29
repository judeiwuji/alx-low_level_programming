#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - Exercise
 *
 * Return: Always 0
 */
int main(void)
{
	/*pid_t my_pid;*/
	pid_t child_pid;
	char *command = "/bin/ls";
	char *args[] = {
		"-l",
		"/tmp",
		NULL,
	};
	char *env[] = {NULL};
	int i = 0;
	int status;

	while (i < 5)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			break;
		}

		if (child_pid == 0)
		{
			if (execve(command, args, env) < 0)
			{
				perror("Error:");
			}
			exit(0);
		}
		else
		{
			wait(&status);
			i++;
		}
	}
	if (child_pid != 0)
	{
		sleep(3);
		/*clear screen
		printf("\033[H\033[J");*/
	}
	return (0);
}
