#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @b: parameter to take in the integers
 *
 * Return: -b if it is less than 0 or b if otherwise
 */

int _abs(int b)
{
	if (b >= 0)
	{
		return (b);
	}
	else
	{
		return (-b);
	}
}
