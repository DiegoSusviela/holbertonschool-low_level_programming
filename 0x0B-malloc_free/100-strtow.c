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
	int pos_str, amount_words = 0;

	for (pos_str = 0; s[pos_str]; pos_str++)
	{
		if (s[pos_str] == ' ')
		{
			if (s[pos_str + 1] != ' ' && s[pos_str + 1] != '\0')
				amount_words++;
		}
		else if (pos_str == 0)
			amount_words++;
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
	int pos_str = 0, amount_words, aux_free, word_lenght, amount_words = 0, dest_pos = 0;
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
			amount_words = 1;
			while (str[pos_str + amount_words] != ' ' && str[pos_str + amount_words])
				amount_words++;
			dest[dest_pos] = (char *)malloc((amount_words + 1) * sizeof(char));
			if (dest[dest_pos] == NULL)
			{
				for (aux_free = 0; aux_free < dest_pos; aux_free++)
					free(dest[aux_free]);
				free(dest[amount_words - 1]);
				free(dest);
				return (NULL);
			}
			for (word_lenght = 0; word_lenght < amount_words; word_lenght++)
				dest[dest_pos][word_lenght] = str[pos_str + word_lenght];
			dest[dest_pos][word_lenght] = '\0';
			dest_pos++;
			pos_str += amount_words;
		}
		else
			pos_str++;
	}
	return (dest);
}
