#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked.
 *
 * Return: 1 if c a letter (lowercase or uppercase) or 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
