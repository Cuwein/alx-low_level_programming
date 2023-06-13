#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: return y. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x,y;
	int z;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	z = open(filename, O_RDONLY);

	if (z == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
	{
		return (0);
	}

	x = read(z, buffer, letters);
	y = write(STDOUT_FILENO, buffer, x);

	close(z);

	free(buffer);

	return (y);
}	
