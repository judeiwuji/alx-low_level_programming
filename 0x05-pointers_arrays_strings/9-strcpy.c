/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to copy to
 * @src: The pointer to copy from
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;

	while (src[i] != '\0')
		i++;

	len = i + 1;
	i = 0;

	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}

	return dest;
}
