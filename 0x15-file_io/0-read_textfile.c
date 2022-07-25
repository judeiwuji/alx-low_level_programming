#include "main.h"

/**
 * read_textfile -
 * @filename: The file name
 * @letters: Total number of letters to be read
 *
 * Return: number of letters read & printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1];
	ssize_t readCount = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read(fd, buf, 1);
	while (buf[0] != EOF)
	{
		readCount += write(1, buf, 1);
		read(fd, buf, 1);
	}

	if (readCount != (ssize_t)letters)
		readCount = 0;
	close(fd);
	return (readCount);
}
