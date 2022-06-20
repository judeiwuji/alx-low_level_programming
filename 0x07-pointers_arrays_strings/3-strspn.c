/**
 *  _strspn - gets the length of a prefix substring.
 * @s: The string that contains the substring
 * @accept: the Substring in s
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				++len;
				break;
			}
		}
	}
	if (len > 0 && accept[i] == '\0')
		len++;
	return (len);
}
