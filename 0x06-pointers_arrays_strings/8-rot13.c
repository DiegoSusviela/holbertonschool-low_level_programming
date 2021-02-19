#include "holberton.h"

/**
 * rot13 - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *rot13(char *s)
{
	int position = 0, count;
	char enco_in[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char enco_out[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[position] != '\0')
	{
		for (count = 0; count < 52; count++)
			if (enco_in[count] == s[position])
			{
				s[position] = enco_out[count];
				count = 52;
			}
position++;
	}
	return (s);
}
