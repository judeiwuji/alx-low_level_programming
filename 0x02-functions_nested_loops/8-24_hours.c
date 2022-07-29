#include "main.h"

/**
 * jack_bauer - This function prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, m, n;
	int max_j;

	i = j = m = n = 0;
	while (i <= 2)
	{
		if (i == 2)
		{
			max_j = 4;
		}
		else
		{
			max_j = 10;
		}

		while (j < max_j)
		{
			while (m < 6)
			{
				n = 0;
				while (n < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
					n++;
				}
				m++;
			}
			m = 0;
			j++;
		}
		j = 0;
		i++;
	}

}
