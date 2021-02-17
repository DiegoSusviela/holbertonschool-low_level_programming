#include "holberton.h"

/**
 * get_first - Entry point
 * @s: wopa
 * @finder1: wopa
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
int get_first(char *s, int finder1)
{
if (*(s + finder1) > '9' || *(s + finder1) < '0')
return (1);
else
return (0);
}

/**
 * _atoi - Entry point
 * @s: wopaa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int finder1 = 0, num = 0, sign = 1;

	while ((get_first(s, finder1) == 1) && (*(s + finder1) != '\0'))
	{
		if (*(s + finder1) == '-')
			sign *= -1;
		finder1++;
	}
	while ((*(s + finder1) >= '0') && (*(s + finder1) <= '9'))
	{
		num = num * 10 + sign * (*(s + finder1) - '0');
		finder1++;
	}
	return (num);
}
