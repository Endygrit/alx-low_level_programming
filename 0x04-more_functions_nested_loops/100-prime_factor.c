#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int i = 612852475143;
	int f = 2;

	while (i > 1)
	{
		if (i % f == 0)
		{
			printf("%d", f);
			i /= f;
		}
		else
		{
			f++;
		}
	}
	printf("\n");
	return (0);
}


