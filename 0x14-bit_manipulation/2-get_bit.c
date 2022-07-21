/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number to search
 * @index: the bit index
 *
 * Return: (int)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		if (i == index)
		{
			bit = n & 1;
			break;
		}
		n >>= 1;
	}

	return (bit);
}
