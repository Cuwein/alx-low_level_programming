#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int x, y, z, a;

	if (ac == 0)
		return (NULL);

	for (x = y = 0; y < ac; y++)
	{
		if (av[y] == NULL)
			return (NULL);

		for (z = 0; av[y][z] != '\0'; z++)
			x++;
		x++;
	}

	aout = malloc((x + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (y = z = a = 0; a < x; z++, a++)
	{
		if (av[y][z] == '\0')
		{
			aout[a] = '\n';
			y++;
			a++;
			z = 0;
		}
		if (a < x - 1)
			aout[a] = av[y][z];
	}
	aout[a] = '\0';

	return (aout);
}
