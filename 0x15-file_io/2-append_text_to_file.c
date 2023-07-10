#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (y = 0; text_content[y]; y++)
			;

		x = open(filename, O_WRONLY | O_APPEND);
		z = write(x, text_content, y);

		if (z == -1 || x == -1)
		{
			return (-1);
		}
	}

	close(x);

	return (1);

}
