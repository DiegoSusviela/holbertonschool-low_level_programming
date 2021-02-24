#include "holberton.h"

/**
 * acom - woopa
 * @s1: sadads
 * @s2: sfsafas
 *
 * Return: pointer to spot in s1 that matches s2
 */
char *acom(char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		if (*s1 == '\0')
			return (0);
		return (acom(s1 + 1, s2));
	}
	return (wildworks(s1 + 1, s2 + 1, s1, s2));
}
char *wildworks(char *s1, char *s2, char *t5, char *t6)
{
	if (*s2 == '*' || (*s1 == '\0' && *s2 == '\0'))
		return (t5);
	else if (*s1 != *s2)
		return (acom(s1, t6));
	else
		return (wildworks(s1 + 1, s2 + 1, t5, t6));
}
/**
 * wildcmp - compares two strings
 * @s1: eaea
 * @s2: sdkjbskdjbfskjdf
 *
 * Return: 1 if match, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *aux;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else
        if (*s2 == '*' && *(s2 + 1) == '*')
		    return (wildcmp(s1, s2 + 1));
	else
    if (*s2 == '*')
	{
		aux = acom(s1, s2 + 1);
		if (aux == 0)
			return (0);
		return (wildcmp(aux + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}