#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (y = 0; text_content[y]; y++)
		;

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	z = write(x, text_content, y);

	if (z == -1)
	{
		return (-1);
	}

	close(x);

	return (1);
}
