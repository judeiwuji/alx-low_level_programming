#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 */
int _strcmp(char *s1, char *s2)
{
	int res, i, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	res = 0;
	if (len1 == len2)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				res = (int)s1[i] - (int)s2[i];
				break;
			}
			i++;
		}
	}
	else
	{
		res = (int)s1[0] - (int)s2[0];
	}
	return (res);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	long int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
