#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - Entry point
 * @strtow: wopa
 *
 * Description: Show aux message blablabla
 * Return: Always 0 (Success)
 */
char *current_word(char *str)
{
	unsigned int cant = 0, pos2;
	char *dest;

	while (str[cant] != ' ')
		cant++;
	dest = malloc((cant + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	for (pos2 = 0; pos2 < cant; pos2++)
	{
		dest[pos2] = str[pos2];
	}
	dest[cant] = '\0';
	return (dest);
}


int _strlen(char *s)
{
	int marker = 0;

	while (*(s + marker))
		marker++;
	return (marker);
}

/*
char *current_word(char *str)
{
	while (*str != " ")
		str++;
	return (str + 1);
}*/

int word_count(char *str)
{
	int pos, count = 0;

	for (pos = 0; str[pos]; pos++)
	{
		if (str[pos] == ' ')
		{
			if ((str[pos + 1] != ' ') && (str[pos + 1] != '\0'))
				count++;
		}
		else 
			if (pos == 0)
				count++;
	}
	pos++;
	return (count);
}

char **strtow(char *str)
{
	char **dest;
	int amount_words, word_col, word_fil;

	if ((!str) || (*str == '\0'))
		return (NULL);
	amount_words = word_count(str);
	if (amount_words == 1)
		return (NULL);
	dest = malloc(sizeof(char *) * amount_words);
	if (!dest)
		return (NULL);
	dest[amount_words - 1] = NULL;
	for (word_fil = 0; word_fil < amount_words; word_fil++)
	{
		/*
		word_lenght = _strlen(current_word(str));
		dest[word_fil] = malloc(sizeof(char) * word_lenght);
		*/
		dest[word_fil] = current_word(str);
		if (!dest[word_fil])
			{
				for (word_col = 0; word_col < word_fil; word_col++)
					free(dest[word_col]);
				free(dest);
				return (NULL);
			}
		/*
		for (word_col = 0; word_col < word_lenght; word_col++)
			dest[word_col][word_fil] = current_word(str);
		*/
	}
	return (dest);
}
