#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Pos_pw, random_pos, Sum_cond, filling;
	char carac_posib[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; 
	char pw[58];

    pw[58] = '\0';

	srand(time(NULL));
	while (Sum_cond != 2772)
	{
		Pos_pw = Sum_cond = filling = 0;
		while ((2650) > Sum_cond)/*2772 - 122 asi no me paso, siendo 122 valor mas alto de ascii de dichos caracteres (z)*/
		{
			random_pos = rand() % 62;/*lleno la pw haciendo que la suma del valor ascii de los caracteres no se pase de*/
			pw[Pos_pw] = carac_posib[random_pos];
			Sum_cond = Sum_cond + carac_posib[random_pos];
			Pos_pw++;
		}
        pw[Pos_pw] = 2772 - Sum_cond;
/*		while (carac_posib[filling])        Tengo que llenar los ultimos 122 o menos con caracteres para llenar la pw
*		{
*			if (carac_posib[filling] == (2772 - Sum_cond))          aca checkeo si estoy parado en el caracter que me llena la suma de la pw correcta
*			{
*				pw[Pos_pw] = carac_posib[filling];
*				Sum_cond = Sum_cond + carac_posib[random_pos];
*				Pos_pw++;
*				break;            para salir del while que filea
*			}
*			filling++;           me sigo moviendo asi encuentro ese caracter para rellenar la suma hasta 2772
*		}
*/	}
	printf("%s", pw);
	return (0);
}
