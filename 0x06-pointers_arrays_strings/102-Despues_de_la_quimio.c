int _strlen(char *s)
{
    int marker = 0;

    while (s[marker] != '\0')
        marker++;
    return (marker);
}
int calc_rest(int a, int b, int c)
{
    if ((a + b + c) > 9)
        return (1);
    return (0);
}
char *voy_viendo (char *n1, int *position1, int *position2, int *position3, int *resto, int size_r, char *r, char *n2)
{
    //printf("\nreso: %d-%d-%d-%d\n", *resto, *position1, *position2, *position3);
    //char *aux[size_r];
    while ((*position1 > 0) && (*position2 > 0), (*position1)--, (*position2)--)
    {
        //printf("\nreso: %d-%d-%d-%d\n", *resto, *position1, *position2, *position3);
        r[*position3] = '0' + (((n1[*position1] - '0') + (n2[*position2] - '0') + *resto) % 10);
        *resto = calc_rest(n2[*position2] - '0', n1[*position1] - '0', *resto);
        *position3 = *position3 - 1;
    }
    //aux = *position3;
    //printf("aux %d\n", aux);
   /* while (aux != size_r)
    {
        printf("%c-", r[aux]);
        aux++;
    }*/
    return (r);
}
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

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int position1 = _strlen(n1), position2 = _strlen(n2), position3 = (size_r - 2), resto = 0, counter;

    if ((position1 > (size_r - 1)) || (position2 > (size_r - 1)))
        return (0);
    r = voy_viendo(n1, &position1, &position2, &position3, &resto, size_r, r, n2);
    if (position1 < 0)
    {
        r = viendo_voy(n2, &position2, &position3, &resto, r);
        /*while (position2 >= 0)
        {
            r[position3] = (((n2[position2] - '0') + resto) % 10) + '0';
            resto = calc_rest(n2[position2] - '0', 0, resto);
            position3--;
            position2--;
        }*/
        if ((position2 < 0) && (resto == 1))
            if (position3 < 0)
                return (0);
            else
                r[position3] = resto + '0';
    }
    else
    {
        r = viendo_voy(n1, &position1, &position3, &resto, r);
        /*while (position1 >= 0)
        {
            r[position3] = ((n1[position1] - '0') + resto) % 10 + '0';
            resto = calc_rest(0, n1[position1] - '0', resto);
            position1--;
            position3--;
        }*/
        if ((resto == 1) && (position3 < 0))
                return (0);
        r[position3] = resto + '0';
    }
    counter = 0;
    if (position3 < 0)
        position3++;
    while (position3 != (size_r - 1))
    {
        r[counter] = r[position3];
        counter++;
        position3++;
    }
    r[counter] = '\0';
    return (r);
}



#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
