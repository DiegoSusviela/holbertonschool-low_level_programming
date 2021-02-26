#include "holberton.h"

/**
 * _strcmp - Entry point
 * @s2: wopa
 * @s1: woopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while ((s1[count] && s2[count]) && (s1[count] == s2[count]))
		count++;
	return (s1[count] - s2[count]);
}
