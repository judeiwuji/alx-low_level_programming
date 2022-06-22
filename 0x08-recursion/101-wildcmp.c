#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return _wildcmp(s1, s2, 0);
}

/**
 * _wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int
 */
int _wildcmp(char *s1, char *s2, int isWild)
{
	isWild = *s2 == '*' ? 1 : 0;
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if ((*s1 == '\0') && !(*s2 + 1 == '\0'))
		return (0);
	else if ((*s1 != *s2) && (isWild != 1))
		return (0);
	else
	{
		if (isWild == 1)
			isWild = (*(s1 + 1) == *(s2 + 1)) ? 0 : 1;

		if (isWild == 1)
		{
			if (*(s1 + 1) == '\0' && *(s2 + 1) != '\0')
				++s2;
			else
				++s1;
			return (_wildcmp(s1, s2, isWild));
		}
		else
			return (_wildcmp(++s1, ++s2, isWild));
	}
}
