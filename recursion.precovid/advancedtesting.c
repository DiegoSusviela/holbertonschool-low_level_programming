#include "holberton.h"

/**
 * recursion1 - imprime
 * @s: numero a imprimir
 * @largo: un char ahi
 * @counter: kdfno
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

char *acom(char *s, char *s_comp)
{
    if (*s == '*')
        return (acom(s++, s_comp));
    else 
        if (*s == *s_comp)
            return (s_comp);
        else
            if (s_comp != '\0')
                return (acom(s, s_comp++));
            else 
                return (s_comp);
}

int comp_char(char *s1, char *s2)
{
    if (*s2 == '*')
        *s1 = acom(s2++, s1);
    if (*s1 == *s2)
        {
            s1 = s1++;
            s2 = s2++;
            return (1);
        }
    return (0);
}

int comp_str(char *s1, char *s2)
{
    if((*s1 && *s2))
        return (comp_char(s1, s2) * (comp_str(s1, s2)))
    else
        if (*s1 == *s2)
            return (1);
        else
            return (0);
}

int wildcmp(char *s1, char *s2)
{
    if ((*s1 == '\0') && (*s1 == *s2)
        return (1);
    return (comp_str(s1, s2));
}


