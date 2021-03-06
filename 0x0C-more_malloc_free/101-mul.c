#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * exit_on_error - Entry point.
 * program that multiplies two positive numbers.
 *
 * Return: 0 - success.
 */

void exit_on_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * check_any_0 - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void check_any_0(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * init_ar - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *init_ar(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * lenght_B10 - determines length of the number
 * and checks if number is in base 10.
 * @argv: realmente
 * @row: row of the array.
 *
 * Return: length of the number.
 */
int lenght_B10(char *argv[], int row)
{
	int col;

	for (col = 0; argv[row][col]; col++)
		if (!isdigit(argv[row][col]))
			exit_on_error();
	return (col);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: a si
 * @argv: a no
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int n1_l, n2_l, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		exit_on_error();
	n1_l = lenght_B10(argv, 1), n2_l = lenght_B10(argv, 2), lnout = n1_l + n2_l;
	check_any_0(argv), nout = malloc(lnout + 1);
	if (!nout)
		exit_on_error();
	nout = init_ar(nout, lnout);
	k = lnout - 1, i = n1_l - 1, j = n2_l - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = n1_l - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = init_ar(nout, lnout);
			k = lnout - 1, i = n1_l - 1, j = n2_l - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
