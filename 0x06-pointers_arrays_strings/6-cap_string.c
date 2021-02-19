#include "holberton.h"

/**
 * cap_string - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *cap_string(char *s)
{
	int position = 0, count;
	char aux[] = " \t\n,;.!?\"(){}";

	while (s[position] != '\0')
	{
		if (s[position] >= 'a' && s[position] <= 'z')
			if (position == 0)
				s[position] = s[position] - 'a' + 'A';
			else
				for (count = 0; count <= 12; count++)
					if (aux[count] == s[position - 1])
						s[position] = s[position]  - 'a' + 'A';
		position++;
	}
	return (s);
}
