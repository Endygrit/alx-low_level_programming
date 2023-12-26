#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;

	if (m > 5)
	{
		printf("%d and is greater than 5", m);
	}
	else if (m == 0)
	{
		printf("%d and is 0", m);
	}
	else
	{
		printf("%d and is less than 6 and not 0", m);
	}
	printf("\n");

	return (0);
}
