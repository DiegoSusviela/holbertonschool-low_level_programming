#include "holberton.h"
#include <stdio.h>

/**
 * imprimir_numero - imprime
 * @a1: priemra parte
 * @a2: segunda
 * @a3: tercera
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int position1, position2, position3, resto, counter, aux, n;

    position1 = position2 = position3 = 0;
    while (n1[position1] != '\0')
        position1++;
    while (n2[position2] != '\0')
        position2++;
    if ((position1 > (size_r - 1)) || (position2 > (size_r - 1)))
        return (0);
    position2--;
    position1--;
    position3 = size_r - 2;
    resto = 0;
    while ((position1 >= 0) && (position2 >= 0))
    {
        n = ((n1[position1] - '0') + (n2[position2] - '0') + resto) % 10;
        r[position3] = '0' + n;
        if ( ((n1[position1] - '0') + (n2[position2] - '0') + resto) > 9)
            resto = 1;
        else
            resto = 0;
        position1--;
        position2--;
        position3--;
    }
    if (position1 < 0)
    {
        if ((position2 < 0) && (resto == 1))
            if (position3 < 0)
                return (0);
            else
                r[position3] = '1';
        while (position2 >= 0)
        {
            aux = ((n2[position2] - '0') + resto) % 10;
            r[position3] = aux + '0';
            if (((n2[position2] - '0') + resto) > 9)
                resto = 1;
            else
                resto = 0;
            position2--;
            position3--;
        }
        if ((position2 < 0) && (resto == 1))
            if (position3 < 0)
                return (0);
            else
                r[position3] = '1';
    }
    else
    {
        while (position1 >= 0)
        {
            aux = ((n1[position1] - '0') + resto) % 10;
            r[position3] = aux + '0';
            if (((n1[position1] - '0') + resto) > 9)
                resto = 1;
            else
                resto = 0;
            position1--;
            position3--;
        }
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
