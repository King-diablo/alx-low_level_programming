#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase and Returns 0 otherwise
 * @c: input integer
 * Return: int.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
