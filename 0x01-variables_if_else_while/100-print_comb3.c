#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int n1 = 48;
	int n2;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 57)
			{
				putchar(com);
				putchar(32);
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');
	return (0);
}
