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
    int position1, position2, position3, resto, counter;

    while (n1[position1] != '\0')
        position1++;
    while (n2[position2] != '\0')
        position2++;
    if ((position1 > size_r) && (position2 > size_r))
        return (0);
    position2--;
    position1--;
    position3 = size_r - 2;
    resto = 0;
    while ((position1 != 0) && (position2 != 0))
    {
        r[position3] = (n1[position1] + n2[position2] + resto) % 10;
        if ((n1[position1] + n2[position2]) > 9)
            resto = 1;
        else 
            resto = 0;
        position1--;
        position2--;
        position3--;
    }
    if (position1 = 0)
        while (position2 < 0)
        {
            r[position3] = n2[position2] + resto;
            position2--;
            position3--;
            resto = 0;
        }
    else 
        while (position1 < 0)
        {
            r[position3] = n1[position1] + resto;
            position1--;
            position3--;
            resto = 0;
        }
    counter = 0;
    while (position3 != (size_r-1))
    {
        r[counter] = r[position3];
        counter++;
        position3++;
    }
    r[counter] = '\0';
    return (r);
}
