#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i > 0 || j > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + i);
			putchar('0' + j);
		}
	}
	putchar('\n');
	return (0);
}
