#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar('0' + k);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (k < 10 )
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (k / 10));
				}
				_putchar('0' + (k % 10));
			}
		}
		_putchar('\n');
	}
}


