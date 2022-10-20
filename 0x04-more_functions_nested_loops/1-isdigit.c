#include "main.h"

/**
 * _isdigit - Returns 1 if c is a digit and Returns 0 otherwise
 * @c: input integer
 * Return: int.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
