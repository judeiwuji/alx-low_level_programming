#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: The string to be searched in
 * @needle: The string to be searched for
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;
	char *found = NULL;

	i = 0;
	while (needle[i] != '\0')
		i++;
	len = i;
	if (needle)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[j])
			{
				for (j = 0; needle[j] != '\0'; j++)
				{
					if (haystack[i] != needle[j])
						break;
					++i;
				}
			}

			if (j == len)
			{
				found = (haystack + i - len);
				break;
			}
		}
	}
	else
	{
		found = haystack;
	}
	return (found);
}