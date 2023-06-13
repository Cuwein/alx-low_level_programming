#include "main.h"

/**
 * error_file - checks the files that can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: The arguments vector.
 * Return: Return nothing.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Main entry point
 * @argc: The number of Arguments.
 * @argv: The arguments vector.
 * Return: Return (0).
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	ssize_t a, b;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	x = open(argv[1], O_RDONLY);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(x, y, argv);

	do {
		a = read(x, buffer, 1024);

		if (a == -1)
			error_file(-1, 0, argv);
		b = write(y, buffer, a);

		if (b == -1)
			error_file(0, -1, argv);
	} while (a == 1024);
	z = close(x);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}

	z = close(y);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	return (0);
}
