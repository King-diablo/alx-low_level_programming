#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to char source 1
 * @s2: pointer to char source 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ax;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			ax = *(s1 + i) - *(s2 + i);
			return (ax);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			ax = *(s1 + i) - *(s2 + i);
			return (ax);
		}
		i++;
	}
	return (0);
}
