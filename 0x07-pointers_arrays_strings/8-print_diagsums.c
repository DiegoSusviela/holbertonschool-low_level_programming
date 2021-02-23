#include "holberton.h"

/**
 *  print_chessboard- imprime
 * @a: tablero
 * 
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
    int diag1 = 0, diag2 = 0, x;

    for (x = 0; x < size; x++)
    {
        diag1 = diag1 + a[x][x];
        diag2 = diag2 + a[size-x-1][x];
    }
    printf("%i, %i", diag1, diag2);
    printf("\n");
}
