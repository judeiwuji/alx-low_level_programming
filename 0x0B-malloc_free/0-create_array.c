#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: The array size
 * @c: Array initial value
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = NULL;

	if (size > 0)
	{
		ar = malloc(sizeof(char) * size);
		if (ar != NULL)
		{
			for (i = 0; i < size; i++)
				ar[i] = c;
		}
	}
	return (ar);
}
