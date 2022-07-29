#include <stdio.h>

/**
 * positive_or_negative - Prints to stdout if a number is postive or negative
 * @i: The number to be tested
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i == 0)
                printf("%d is zero\n", i);
        else if (i > 0)
                printf("%d is positive\n", i);
        else
                printf("%d is negative\n", i);
}
