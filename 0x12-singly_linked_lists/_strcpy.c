#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to copy to
 * @src: The pointer to copy from
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	if (src != NULL && dest != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
