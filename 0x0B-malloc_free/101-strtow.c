#include "main.h"

/**
 * strtow - a function that splits a string into words.
 * @str: The string to be splited
 *
 * Return: double char pointer
 */
char **strtow(char *str)
{
	char **words = NULL;
	char *word;
	int rows, pos, i, m, n;

	if (str != NULL && str[0] != '\0')
	{
		rows = _countwords(str);
		words = (char **)malloc(sizeof(char) * rows + 1);

		pos = 0;
		m = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ' || str[i + 1] == '\0')
			{
				if (pos > 0)
				{
					word = _substr(str, i - pos, i + pos + 1);
					words[m] = (char *)malloc(sizeof(char) * _strlen(word));
					if (words[m] != NULL)
					{
						for (n = 0; n < pos + 1; n++)
							words[m][n] = word[n];
						words[m][n++] = '\0';
					}
					m++;
				}
				pos = 0;
				continue;
			}
			++pos;
		}
		words[m] = NULL;
	}
	return (words);
}

/**
 * _substr - Will return a string at specified position
 * @str: The string
 * @start: The start position
 * @end: The end position
 *
 * Return: char pointer
 */
char *_substr(char *str, int start, int end)
{
	char *sub;
	int i;

	sub = malloc(sizeof(char) * (end - start));
	for (i = 0; start < end; i++, start++)
		sub[i] = str[start];

	return (sub);
}

/**
 * _countwords - count number of words in a string
 * @str: the string
 *
 * Return: int
 */
int _countwords(char *str)
{
	int count, pos, i;

	pos = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (pos > 0)
				++count;
			pos = 0;
			continue;
		}
		++pos;
	}
	return (count);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}