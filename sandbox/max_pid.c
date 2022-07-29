#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Max PID
 *
 * Return: always 0
 */
int main(void)
{
	int fid = open("/proc/sys/kernel/pid_max", O_RDONLY);
	char buf[100];

	if (fid == -1)
		exit(98);

	read(fid, buf, 100);
	printf("%s\n", buf);
	close(fid);
	return (0);
}
