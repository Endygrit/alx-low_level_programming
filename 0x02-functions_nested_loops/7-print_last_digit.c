#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: The parameter to take in the last digit
 *
 * Return: The value of the last digit
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	j = -j;
	_putchar('0' + j);
	return (j);
}

