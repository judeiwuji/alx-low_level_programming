#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *dStr = NULL;
	unsigned int size, i;

	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
			i++;
		size = i;
		dStr = malloc(sizeof(char) * size);
		if (dStr != NULL)
		{
			for (i = 0; i <= size; i++)
				dStr[i] = str[i];
		}
	}
	return (dStr);
}
