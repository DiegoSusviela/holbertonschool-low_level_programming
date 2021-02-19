#include "holberton.h"

/**
 * _strcat - Entry point
 * @dest: wopa
 * @src: woopa
 * 
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
    int start, count;

	start = count = 0;
	while (dest[start] != '\0')
		start++;
	while (dest[start] = src[count])
	{
		start++;
		count++;
	}
	return (dest);
}
