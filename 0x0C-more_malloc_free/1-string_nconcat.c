#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @n: sdkna
 * @s1: ea
 * @s2: aeae
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int pos_s1, pos_s2, pos_concat;
	char *str_concat;

	pos_s1 = 0;
	if (s1)
		while (s1[pos_s1])
			pos_s1++;
	pos_s2 = 0;
	if (s2)
		while (s2[pos_s2])
			pos_s2++;
	if (pos_s2 > n)
		pos_s2 = n;
	str_concat = malloc(sizeof(char) * (pos_s1 + pos_s2 + 1));
	if (!str_concat)
		return (NULL);
	for (pos_concat = 0; pos_concat < pos_s1; pos_concat++)
		str_concat[pos_concat] = s1[pos_concat];
	for (pos_concat = 0; pos_concat < pos_s2; pos_concat++)
		str_concat[pos_concat + pos_s1] = s2[pos_concat];
	str_concat[pos_s1 + pos_s2] = '\0';
	return (str_concat);
}
