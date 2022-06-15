/**
 * _strncpy -  copies a string.
 * @src: the string to be copied from
 * @dest: the string to be copied to
 * @n: Total number of bytes to copy from src to dest
 *
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, len;

	i = 0;
	while (src[i] != '\0')
		i++;
	len = i;

	if (n > len)
		n = len;

	j = 0;
	while (j <= n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
