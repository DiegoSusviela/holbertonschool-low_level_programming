#include "holberton.h"
#include <stdlib.h>

/**
 * word_count - asedege
 * @s: o chess
 *
 * Return: int of number of words
 */
int word_count(char *s)
{
	int pos_str = 0, amount_words = 0;

	while (s[pos_str])
	{
		if (s[pos_str] == ' ')
		{
			if (s[pos_str + 1] != ' ' && s[pos_str + 1] != '\0')
				amount_words++;
		}
		else
			if (pos_str == 0)
				amount_words++;
		pos_str++;
	}
	amount_words++;
	return (amount_words);
}

/**
 * strtow - swoooopoa
 * @str: eas
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int pos_str = 0, word_size, aux_free, word_lenght, amount_words, dest_pos = 0;
	char **dest;

	if (!str || !(*str))
		return (NULL);
	amount_words = word_count(str);
	if (amount_words == 1)
		return (NULL);
	dest = (char **)malloc(amount_words * sizeof(char *));
	if (!dest)
		return (NULL);
	dest[amount_words - 1] = NULL;
	while (str[pos_str])
	{
		if (str[pos_str] != ' ' && (pos_str == 0 || str[pos_str - 1] == ' '))
		{
			word_size = 1;
			while (str[pos_str + word_size] != ' ' && str[pos_str + word_size])
				word_size++;
			dest[dest_pos] = (char *)malloc((word_size + 1) * sizeof(char));
			if (dest[dest_pos] == NULL)
			{
				for (aux_free = 0; aux_free < dest_pos; aux_free++)
					free(dest[aux_free]);
				free(dest[amount_words - 1]);
				free(dest);
				return (NULL);
			}
			for (word_lenght = 0; word_lenght < word_size; word_lenght++)
				dest[dest_pos][word_lenght] = str[pos_str + word_lenght];
			dest[dest_pos][word_lenght] = '\0';
			dest_pos++;
			pos_str += word_size;
		}
		else
			pos_str++;
	}
	return (dest);
}
