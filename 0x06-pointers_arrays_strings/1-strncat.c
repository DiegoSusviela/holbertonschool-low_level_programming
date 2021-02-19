#include "holberton.h"

/**
 * _strncat - Entry point
 * @dest: wopa
 * @src: woopa
 * @n: woopa
 * 
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
    int start, count;

	start = count = 0;
	while (dest[start] != '\0')
		start++;
	while (count < n && (dest[start] = src[count]))
	{
		start++;
		count++;
	}
	if (count < n)
		dest[start]= src[count];
	return (dest);
}
