#include "main.h"
/**
 * largest_number - it will returns the largest of 3 numbers
 * @a: The first integer
 * @b: The second integer
 * @c: The third integer
 * Return: The largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
