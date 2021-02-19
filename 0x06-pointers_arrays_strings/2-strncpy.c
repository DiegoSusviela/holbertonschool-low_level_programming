#include "holberton.h"

/**
 * _strncpy - Entry point
 * @dest: wopa
 * @src: woopa
 * @n: wopex
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
