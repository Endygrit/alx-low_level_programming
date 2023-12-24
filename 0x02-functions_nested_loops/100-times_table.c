#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The parameter to print the times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			k = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
		}
		_putchar('\n');
	}
}



