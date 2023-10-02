#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to the filename
 * @text_content: The content added
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int jef;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	jef = open(filename, O_WRONLY | O_APPEND);

	if (jef == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(jef, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(jef);

	return (1);
}
