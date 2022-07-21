#include "main.h"

/**
 * clear_bit -
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