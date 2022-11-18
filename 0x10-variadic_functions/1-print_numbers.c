#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list cool;
	unsigned int i;
	int deb = 0;


	va_start(cool, n);
	for (i = 0; i < n; i++)
	{
		deb = va_arg(cool, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", deb, separator);
		else
			printf("%d", deb);
	}
	va_end(cool);
	printf("\n");
}
