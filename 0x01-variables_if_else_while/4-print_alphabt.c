#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	while (letter <= 'z')
	{
		if(letter == 'e' || letter == 'q')
		{
			letter += 1;
		}
		else
		{
			putchar(letter);
			letter += 1;
		}
	}
	putchar('\n');
	return (0);
}
