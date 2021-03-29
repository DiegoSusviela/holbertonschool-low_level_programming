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
	int file_dir;
	char *buffer;
	ssize_t num_read = 0;
	ssize_t num_write = 0;


	if (!filename)
		return (0);

	file_dir = open(filename, O_RDONLY);
	if (file_dir == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file_dir);
		return (0);
	}

	num_read = read(file_dir, buffer, letters);
	close(file_dir);
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
