/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the digit
 * @index: the index

 * Return: (int)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | 1 << index;
	return (*n);
}
