/**
 * rot13 - encodes a string using rot13.
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	int i, pos;
	int lower, upper, maxLower, maxUpper;
	char c;

	i = 0;
	lower = 97;
	upper = 65;
	maxLower = lower + 25;
	maxUpper = upper + 25;

	while (str[i] != '\0')
	{
		if (c >= lower && c <= maxLower)
		{
			pos = c + 13;
		}
		else if (c >= upper && c <= maxUpper)
		{
		}
		else
		{
		}
	}
}