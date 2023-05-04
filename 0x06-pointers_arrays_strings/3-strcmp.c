#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	while (y == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
	}

	return (y);
}

