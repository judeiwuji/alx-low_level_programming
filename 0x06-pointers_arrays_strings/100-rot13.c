/**
 * rot13 - encodes a string using rot13.
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	int i, pos, pointer;
	int alpha, maxAlpha;
	char c;

	i = 0;

	while (str[i] != '\0')
	{
		c = str[i];
		if (((c <= 97) && (c >= 122)) || ((c <= 65) && (c >= 90)))
		{
			pos = c + 13;
				}
	}
}