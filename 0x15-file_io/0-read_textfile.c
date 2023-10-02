#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and
 * prints it out to the POSIX standard output
 * @filename: A pointer to the name of the file.
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int jef;
	ssize_t rlen, wlen;
	char *buffer;

	if (filename == NULL)
		return (0);
	jef = open(filename, O_RDONLY);
	if (jef == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(jef);
		return (0);
	}
	rlen = read(jef, buffer, letters);
	close(jef);
	if (rlen == -1)
	{
		free(buffer);
		return (0);
	}
	wlen = write(STDOUT_FILENO, buffer, rlen);
	free(buffer);
	if (rlen != wlen)
		return (0);
	return (wlen);
}
