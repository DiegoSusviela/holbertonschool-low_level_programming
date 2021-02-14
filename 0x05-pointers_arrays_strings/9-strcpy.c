#include "holberton.h"

/**
 * *_strcpy - Entry point
 * @src: wopa
 * @dest: wooooopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int contador = 0;

	while (*(src + contador))
	{
		*(dest + contador) = *(src + contador);
		contador++;
	}
	*(dest + contador) = '\0';
	return (dest);
}
