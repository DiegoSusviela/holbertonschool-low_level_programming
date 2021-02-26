#include "holberton.h"

/**
 *  _strstr- imprime
 * @needle: numero a imprimir
 * @haystack: un char ahi
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
int pos1 = 0, pos2 = 0;

while (haystack[pos1])
{
while (needle[pos2] && haystack[pos1] == needle[0])
if (haystack[pos2 + pos1] == needle[pos2])
pos2++;
else
break;
if (needle[pos2])
{
pos1++;
pos2 = 0;
}
else
return (haystack + pos1);
}
return (0);
}
