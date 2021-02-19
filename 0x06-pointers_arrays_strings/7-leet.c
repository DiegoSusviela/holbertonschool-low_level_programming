#include "holberton.h"

/**
 * leet - Entry point
 * @str1: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *leet(char *str1)
{
	int position = 0, count;
	char be_remplaced[] = "aAeEoOtTlL";
	char to_remplace[] = "43071";

	while (str1[position] != '\0')
{
		for (count = 0; count <= 9; count++)
			if (be_remplaced[count] == str1[position])
				str1[position] = to_remplace[count / 2];
position++;
}
return (str1);
}
