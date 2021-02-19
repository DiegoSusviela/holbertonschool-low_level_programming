#include "holberton.h"

/**
 * string_toupper - Entry point
 * @s: wopa
 * 
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
	int position = 0;

	while (s[position] != '\0')
	{
		if (s[position] >= 'a' && s[position] <= 'z')
			s[position] = s[position] - 'a' + 'A';
		position++;
	}
	return (s);
}