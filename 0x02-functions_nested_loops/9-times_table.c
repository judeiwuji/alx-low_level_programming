#include "main.h"

/**
 * times_table - This function prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0;
	int j, product;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i * j;
			if (product == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (j + 1  < 10)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
