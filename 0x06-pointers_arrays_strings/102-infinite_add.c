#include "holberton.h"

/**
 * _strlen - imprime
 * @s: numero a imprimir
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int marker = 0;

while (s[marker] != '\0')
marker++;
    return (marker);
}

/**
 * calc_rest - imprime
 * @a: numero a imprimir
 * @b: rasd
 * @c: efmpf
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int calc_rest(int a, int b, int c)
{
    if ((a + b + c) > 9)
        return (1);
    return (0);
}

/**
 * voy_viendo - imprime
 * @position1: numero a imprimir
 * @n1: dajdskj
 * @position2: skjd
 * @position3: nogsd
 * @resto: dfgdfh
 * @size_r: sff
 * @r: fioansfo
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
char *voy_viendo (char *n1, int *position1, int *position2, int *position3, int *resto, int size_r, char *r, char *n2)
{
    while ((*position1 > 0) && (*position2 > 0), (*position1)--, (*position2)--)
    {
        r[*position3] = '0' + (((n1[*position1] - '0') + (n2[*position2] - '0') + *resto) % 10);
        *resto = calc_rest(n2[*position2] - '0', n1[*position1] - '0', *resto);
        *position3 = *position3 - 1;
    }
    return (r);
}
/**
 * viendo_voy - imprime
 * @position1: numero a imprimir
 * @n1: dajdskj
 * @position3: nogsd
 * @resto: dfgdfh
 * @r: fioansfo
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
char *viendo_voy (char *n1, int *position1, int *position3, int *resto, char *r)
{
    while (*position1 >= 0)
    {
        r[*position3] = ((n1[*position1] - '0') + *resto) % 10 + '0';
        *resto = calc_rest(0, n1[*position1] - '0', *resto);
        (*position1)--;
        (*position3)--;
    }
    return (r);
}
/**
 * viendo_voy - imprime
 * @n2: numero a imprimir
 * @n1: dajdskj
 * @size_r: nogsd
 * @r: fioansfo
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int position1 = _strlen(n1), position2 = _strlen(n2), position3 = (size_r - 2), resto = 0, counter, n;

    if ((position1 > (size_r - 1)) || (position2 > (size_r - 1)))
        return (0);
    r = voy_viendo(n1, &position1, &position2, &position3, &resto, size_r, r, n2);
    if (position1 < 0)
    {
        r = viendo_voy(n2, &position2, &position3, &resto, r);
         if ((position2 < 0) && (resto == 1))
            if (position3 < 0)
                return (0);
            else
                r[position3] = '1';
    }
    else
    {
        r = viendo_voy(n1, &position1, &position3, &resto, r);
        if ((resto == 1) && (position3 < 0))
                return (0);
        r[position3] = resto + '0';
    }
    counter = 0;
    while (position3 != (size_r - 1))
    {
        r[counter] = r[position3];
        counter++;
        position3++;
    }
    r[counter] = '\0';
    return (r);
}
