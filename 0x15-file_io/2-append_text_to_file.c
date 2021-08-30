#include "holberton.h"

/**
 * _strlen - omaiga
 * @str: wopa
 *
 * Return: the returnas
 */

size_t _strlen(char *str)
{
	size_t pos = 0;

	while (str[pos])
		pos++;
	return (pos);
}
/**
 * append_text_to_file - omaiga
 * @filename: wopa
 * @text_content: dsfdsf
 *
 * Return: the returnas
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t largo = 0;
	int file_desc;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	largo = write(file_desc, text_content, _strlen(text_content));

	if (largo == -1)
		return (-1);

	close(file_desc);
	return (1);
}
