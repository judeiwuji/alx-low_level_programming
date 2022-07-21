#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The number
 * @index: The index starting from 0
 *
 * Return: (int)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int flag = 1;

	*n = *n & ~(1 << index);
	return (flag);
}
