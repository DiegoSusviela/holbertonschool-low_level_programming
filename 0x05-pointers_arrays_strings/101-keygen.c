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

    	srand(time(NULL));
		Pos_pw = Sum_cond = filling = 0;
		while ((2650) > Sum_cond)
		{
			random_pos = rand() % 62;
			pw[Pos_pw] = carac_posib[random_pos];
			Sum_cond = Sum_cond + carac_posib[random_pos];
			Pos_pw++;
		}		        
	pw[Pos_pw] = 2772 - Sum_cond;
	Pos_pw++;
	pw[Pos_pw] = '\0';
	printf("%s", pw);
	return (0);
}
