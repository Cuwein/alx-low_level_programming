#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x = 0, y = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}

	if (n > y)
	n = y;
	ptr = malloc((x + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < x; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (x + n); i++)
	{
		ptr[i] = s2[i - x];
	}
	ptr[i] = '\0';

return (ptr);
}
