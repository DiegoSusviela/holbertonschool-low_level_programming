#include "holberton.h"

/**
 * read_textfile - omaiga
 * @filename: wopa
 * @letters: dsfdsf
 *
 * Return: the returnas
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t num_read = 0;
	ssize_t num_write = 0;


	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file_desc);
		return (0);
	}

	num_read = read(file_desc, buffer, letters);
	close(file_desc);
	if (num_read == -1)
	{
		free(buffer);
		return (0);
	}
	num_write = write(STDOUT_FILENO, buffer, num_read);
	free(buffer);
	if (num_write == -1)
		return (0);
	return (num_write);
}
