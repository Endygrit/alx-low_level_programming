#include "main.h"

/**
 *  _islower - Checks for lowercase character
 *  @c: The character to be  checked
 *
 *  Returns: 1 if c is a lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
