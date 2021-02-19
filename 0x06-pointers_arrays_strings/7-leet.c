#include "holberton.h"

/**
 * leet - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int position, count;
	char be_remplaced[11] = "aAeEoOtTlL";
	char to_remplace[6] = "43071";

	while (s[position] != '\0')
{
		for (count = 1; count <= 10; count++)
			if (be_remplaced[count] == s[position])
				s[position] = to_remplace[count / 2];
position++;
}
return (s);
}
