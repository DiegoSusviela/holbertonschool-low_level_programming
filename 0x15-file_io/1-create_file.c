#include "holberton.h"

/**
 * _strlen - omaiga
 * @str: wopa
 *
 * Return: the returnas
 */

size_t _strlen(char *str)
{
	size_t pos;

	while (str[pos])
		pos++;
	return (pos);
}

/**
 * create_file - omaiga
 * @filename: wopa
 * @letters: dsfdsf
 *
 * Return: the returnas
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t largo;
	int file_desc;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
		return (-1);

	if (!text_content)
		largo = write(file_desc, text_content, _strlen(text_content));
	close(file_desc);

	if (largo == -1)
		return (-1);
	return (1);
}
